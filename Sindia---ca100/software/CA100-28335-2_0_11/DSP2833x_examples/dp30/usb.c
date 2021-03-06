#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

void spi_send_byte(Uint16 data)
{
    Uint16 tem,i,x;
    
	tem=data&0x00ff;
    UDSEL(1);UDSCK(0);UDSEL(0);
    for (x=0;x<50;x++);
    for (i=0x80;i!=0;i=i/2)
    {
        if (tem&i) UDSO(1);
        else UDSO(0);
        for (x=0;x<50;x++);
        UDSCK(1);
        for (x=0;x<200;x++);
        UDSCK(0);
    }
    
	UDSEL(1);
}

Uint16 spi_receive_byte(void)
{
    Uint16 temp,i,k,x;
    
	temp=0;
    UDSEL(1);UDSCK(0);UDSEL(0);
    for (i=0x80;i!=0;i=i/2)
    {
        UDSCK(0);
        for (x=0;x<50;x++);
        UDSCK(1);
		for (x=0;x<200;x++);
		k=GpioDataRegs.GPADAT.bit.GPIO13;
        if (k) {temp=temp|i;}
    }
    UDSCK(0);
	UDSEL(1);
	return temp;
}



Uint16 const Detect[66]={0xaa,0xbb,
					   0x01,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	 				   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	 				   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	 				   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};  

Uint16 const Create[66]={0xaa,0xbb,
					   0x07,0x54,0x45,0x53,0x54,0x20,0x20,0x20,0x20,0x54,0x58,0x54,0x20,0x00,0x00,0x00,
					   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x63,0x4F,0xFD,0x32,0x00,0x00,0x00,0x00,0x00,
					   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
					   0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};

Uint16 const  Write[66]={0xaa,0xbb,
					   0x09,0x00,74,0x01,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
			  		   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
					   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
					   0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20};


/***************************************************
返回：0－－－无盘；1－－－正常；2－－－异常

***************************************************/
Uint16 usb_check(void)
{
    Uint16 i,receive[64];

    for(i=0; i<66; i++)spi_send_byte(Detect[i]);  

    do
	{
        receive[0]=spi_receive_byte();
	}while(receive[0]==0xff);//wait for the frist byte
    for(i=0; i<100; i++);//延时
    for(i=1; i<64; i++)
    {
        receive[i]=spi_receive_byte();
    }         
    if(receive[0]==0x04)
	{
	    if(receive[1]==1) return 1;
        if(receive[1]==0) return 0;
	}
	return 2;
}



/***************************************************
返回：0－－－创建失败；1－－－创建成功；2－－－异常

***************************************************/
/*
Uint16 usb_creat_file(Uint16 number,char *filename,Uint16 *data,Uint16 x)
{
    Uint16 i,receive[64],j;
    
    receive[0]=HEX4BCD(number);
    receive[3]=receive[0]&0x0f;
    receive[3]=receive[3]+0x30;
	receive[2]=receive[0]>>4&0x0f;
	receive[2]=receive[2]+0x30;
	receive[1]=receive[0]>>8&0x0f;
	receive[1]=receive[1]+0x30;
	receive[0]=receive[0]>>12&0x0f;
	receive[0]=receive[0]+0x30;
    for(i=0; i<66; i++)
    {
        if(i>=3 && i<=6)spi_send_byte(filename[i-3]);
		else if(i>=7 && i<=10)spi_send_byte(receive[i-7]);
        else  
        spi_send_byte(Create[i]); 
    }

    do
	{
        receive[0]=spi_receive_byte();
	}while(receive[0]==0xff);//wait for the frist byte
    for(i=0; i<100; i++);//延时
    for(i=1; i<64; i++)
    {
        receive[i]=spi_receive_byte();
    }         
    if(receive[0]==0x0a)
	{
	    if(receive[1]==1)
	    {
		   

            for(i=0; i<66; i++)
            {
                if(i==4){j=x&0x0ff,spi_send_byte(j);}
				else if(i==5){j=x>>8&0x0ff,spi_send_byte(j);}
                else 
                spi_send_byte(Write[i]); 
            }

			for(i=0; i<x; i++)spi_send_byte(data[i]);
			do
            {
                receive[0]=spi_receive_byte();
            }while(receive[0]==0xff);//wait for the frist byte
            if(receive[0]==0x0c)
			{
			    if(receive[1]==1){usb_check();return 1;}
                else return 0;
            }
        }
        else return 0;
	}
	return 2;
}
*/

Uint16 usb_creat_file(Uint16 number,char *filename,Uint16 *data,Uint16 x)
{
    Uint16 i,receive[64],j,k[2];
    
    receive[0]=HEX4BCD(number);
    receive[3]=receive[0]&0x0f;
    receive[3]=receive[3]+0x30;
	receive[2]=receive[0]>>4&0x0f;
	receive[2]=receive[2]+0x30;
	receive[1]=receive[0]>>8&0x0f;
	receive[1]=receive[1]+0x30;
	receive[0]=receive[0]>>12&0x0f;
	receive[0]=receive[0]+0x30;

	rx8025_clock_read();
	for(i=0;i<7;i++)i2c[i]=BCD2HEX(i2c[i]);
    
    k[0]=i2c[2]*2048+i2c[1]*32+i2c[0]/2;
    k[1]=(i2c[6]+20)*512+i2c[5]*32+i2c[4];

	receive[25]=k[0]&0x0ff;receive[26]=k[0]>>8&0x0ff;
    receive[27]=k[1]&0x0ff;receive[28]=k[1]>>8&0x0ff;
    for(i=0; i<66; i++)
    {
        if(i>=3 && i<=6)spi_send_byte(filename[i-3]);
		else if(i>=7 && i<=10)spi_send_byte(receive[i-7]);
		else if(i>=25 && i<=28)spi_send_byte(receive[i]);
        else  
        spi_send_byte(Create[i]); 
    }

    do
	{
        receive[0]=spi_receive_byte();
	}while(receive[0]==0xff);//wait for the frist byte
    for(i=0; i<100; i++);//延时
    for(i=1; i<64; i++)
    {
        receive[i]=spi_receive_byte();
    }         
    if(receive[0]==0x0a)
	{
	    if(receive[1]==1)
	    {
            for(i=0; i<66; i++)
            {
                if(i==4){j=x&0x0ff,spi_send_byte(j);}
				else if(i==5){j=x>>8&0x0ff,spi_send_byte(j);}
                else 
                spi_send_byte(Write[i]); 
            }

			for(i=0; i<x; i++)spi_send_byte(data[i]);
			do
            {
                receive[0]=spi_receive_byte();
            }while(receive[0]==0xff);//wait for the frist byte
            if(receive[0]==0x0c)
			{
			    if(receive[1]==1){usb_check();return 1;}
                else return 0;
            }
        }
        else return 0;
	}
	return 2;
}













