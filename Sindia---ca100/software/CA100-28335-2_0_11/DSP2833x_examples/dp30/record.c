#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File


/***********************************************************************
DPA1000Ƕ��ʽ������д��¼ 2009-11-03

***********************************************************************
-------------------------------------------------------------
������  ������
�������ڣ�08-11-18
�������ݣ�1.�汾�ţ�1.00
          2.�ⲹ��
-------------------------------------------------------------

-------------------------------------------------------------
������  ������
�������ڣ�2010-01-27
�������ݣ�1.�汾�ţ�2.00
          2.������3��������������ǰ�趨

������̽ͷ��ʶ�𷽷���
�趨 FM24CL04���������ʵ�ַ:    0xa0------H2S  
                                0xa4------SO2
								0xa8------HF
	������Ҫ�ں��ӵ�·��ʱ����

�趨 FM24CL04�д洢��ID�� ��   0Xa0-----H2S
                               0Xa4-----SO2
							   0Xa8-----HF

�����Զ��ж�̽ͷ�ķ�����

1.����̽ͷ��Ҫ��װд��FM24CL04�е�ַΪ00���ĸ��Դ�������ID�ţ�

2.��̽ͷװ�����������λ�ú������Զ�����������ַ���ʸ�̽ͷ
  ��������Ӧ��ID�ź�ʵ��ǰ��ַ��̽ͷ��ʲô��������

3.��鴫�����Ƿ�У׼����У׼�����Ƕ���

4.����ѯ���ĵ�ַ�ʹ����������ֱ����ȫ�ֱ�����

5.��ز����Ĵ洢��ַ��
                     ID---------------0X00
                     У׼���---------0X02   У׼��ӦΪ 0X55
					 ϵ��-------------0X10��0X1B   ��12���ֽڣ�3���������ݣ�
                     У׼����---------OX20��0X26   ��7���ֽ�
					 ���������-------0x40��0X49   ��10���ֽ�,��ű�־ 0x4f
-------------------------------------------------------------
������  ������
�������ڣ�2010-04-08
�������ݣ�1.�汾�ţ�2.00
          2.ʪ�Ȳ��ֵ�������д

-------------------------------------------------------------
������  ������
�������ڣ�2010-04-18
�������ݣ�1.�汾�ţ�2.00
          2.ʪ�Ȳ��ֵ�������д
		  ������򣺼ƻ� ������Ϊʱ�� ��ȡ240�����ݣ�1������/3���720��
		                 ������Ϊ�¶� ��120�ȵ����䣬��С��λ���϶ȣ��������Ϊ��30��110��

		  3.ʪ�ȵ������Ĺ滮��

		    ������ʾ������CA100��DA100����ϴ�Ӧ��������
			�����л�ͼ���ܣ����Դ洢�ĸ�ʽҲ��ǰ�治ͬ
			���躯���Ŀ�ܻ�����ɣ���һ��������������ʵ��
			�ɶ�ʱ��2��ʵ�ֻ�ͼ��ʱ����ƣ����Ƶı�־�Ĵ����ͼ����Ĵ����Ѷ����

*//********************************************************************
������  ������
�������ڣ�2011-02-12
�������ݣ�1.�汾�ţ�3.00
          2.���Ӵ���ģ��
          3.���Ӵ���0 7BIT /2400BPS
		    XCS6��ΪRXDA,XA19��ΪTXDA��ͨ��CPLD����  TXDA----DISP_ON��RXDA----I11
***********************************************************************/

/********************************************************************
������  ������
�������ڣ�2011-02-22
�������ݣ�1.�汾�ţ�2.01
          2.����У׼��ʽ��ѡ������2�αƽ�У׼����������ĵ�Ϊ7����
		    
			H2S��  0��5��10��20��30��40��50
			SO2��  0��2.5��5��7.5��10��15��20
***********************************************************************/

/********************************************************************
������  ������
�������ڣ�2011-03-8
�������ݣ�1.�汾�ţ�2.01
          2.����Ϊ����ʱ����ʾ��Ϊ�㣻
		  3.���ӵ��㹦�ܣ�
		  4.����У׼��������Ҫ��Ĺ��ܣ�

		  ��һ���Ĺ�����
		  ���Ӱ汾�ŵ���ʾ��У׼ʱ����ʾ
		  ��������ʾ��Ϊ 5 10 15 20 25 30 35 40 
		  ����ĸ��ĺ����ù���
		  ������Ļ��У׼����(���Ŀͷ�˵���ڲ�Ʒ���������ڲ���У׼)
		 ( ���������¶Ȳ���  ��Ϊѡ�� ��ѡ���H2S SO2 CO)---��ʱ����

		    
			
***********************************************************************/
/**********************************************************************
������  ������
�������ڣ�2011-03-15
�������ݣ�1.�汾�ţ�2.01
          2.SO2�ķ�Χ��Ϊ0��100PPM������CO����HF��
		  3.����һ��������������
***********************************************************************/

/**********************************************************************
������  ������
�������ڣ�2011-04-27
�������ݣ�1.�汾�ţ�2.02
          2.���ӽ����ȵĿ��Ƹ�Ϊ�̶������ƶ˽ӣ�5V��12V
		  3.��KG1-O17-IO48 �趨Ϊ��ŷ��Ŀ��ƶ�
		  4.BPL-O1-IO53�趨Ϊ��õĿ��ƶ�
		  5.���������ý������ӿ��ƹ���
***********************************************************************/
/**********************************************************************
������  ������
�������ڣ�2011-05-06
�������ݣ�1.�汾�ţ�2.03
          2.CA100���������崿�ȵĹ��ܣ�ʪ�ȡ����ȡ�SO2��H2S
		  3.���ӵ����Ĵ����ǽ���

***********************************************************************/

/**********************************************************************
������  ������
�������ڣ�2011-05-19
�������ݣ�1.�汾�ţ�2.03
          2.��PPMV��������ΪGB/T5832.2-2008
***********************************************************************/

/**********************************************************************
������  ������
�������ڣ�2011-10-25
�������ݣ�1.�汾�ţ�1.00
          2.���¶���ʾ���ٶȸ�Ϊ1��
          3.����洢���⣺HOLD_FLAG��ɵ�����
***********************************************************************/

/**********************************************************************
������  ������
�������ڣ�2011-11-05
�������ݣ�1.�汾�ţ�1.01(��calib.c�к���function_select(void)���а汾��)
          2.����H2S�������SO2�Ľ��淴Ӧ��������������
***********************************************************************/



/**********************************************************************
20110506_100ppm_GP - V1.05.0.rar(ԭ����20110506_100ppm_GP - 200120109,�ǰ��ν����µ����°汾)

20110506_100ppm_GP - V1.05.1.rar:
1������  flwold= flwold=ad8401_value[0]*4.096/65536.0  Ϊ   flwold=ad8401_value[0]*(4.096/65536.0)  ����˸������������
   �����������Ϊ�������4.096��65536.0Ϊ˫����double����������������Ϊflwold=ad8401_value[0]*(4.096/65536.0)����
2�������¶��У׼���򡱺͡�����У׼������ʾ��λ���ڶ��е�����
3������sourceinsight ����
4��WARNING: invalid compiler option --float_support=fpu32 (ignored) �� error:  can't find input file 'rts2800_fpu32.lib' ����Ľ��
��ccs��component manager���ѡ��Code Composer Studio->build tools->tms320c28xx->ѡ��Texas Instrument C2000 Code generation tools<5.0.0B2> ���������˳����һ����̣�ѡ��build options->compiler->advanced->Float Point Support,ѡ��fpu32������
���룬���������Ͳ��������

20110506_100ppm_GP - V1.05.2.rar
1���޸ĵ����ʾ����������
2���޸��¶�У׼����ʾ��������

20110506_100ppm_GP - V1.05.3.rar
1���޸Ĵ�ӡ��U�̴洢��999.9ppm��ʾ���������

20110506_100ppm_GP - V1.05.4.rar
1���޸��¶�У׼���Ͻǲ���ֵ��ʾ������
2���޸ļ�����Ҳ��Ӧ������

20110506_100ppm_GP - V1.05.5.rar
1���޸�so2��У׼����������ʾ������Ϊ0�����⣬��������Ҳ���������⣬ֻ��Ϊ��������һ���ĵ���
2���޸������޸ĺ��޷��洢������
3���޸������������Ҳ�����������Ӧ������
4�����Ӱ汾��
5���޸���������������7��ʾ���������

20110506_100ppm_GP - V2.00.0.rar
1���޸���������������ʾ���������
2���޸�CA100-V2	�����һ�棨CO����¶������������棩��δ��ϸ����
3�����Ӵ���У׼

20110506_100ppm_GP - V2.00.1.rar
1����ʱ�����¶�У׼
2���޸���ʾ�¶���洢�¶Ȳ�ͬ������

20110506_100ppm_GP - V2.00.2.rar
1������¶�����У׼
2���޸���ʾ�¶���洢�¶Ȳ�ͬ������

20110506_100ppm_GP - V2.00.3.rar
1������¶�����У׼
2���޸���ʾ�¶���洢�¶Ȳ�ͬ������
3���޸���SENSOR��CALIB_7��
4������sflt_to_str����
5���޸�data_to_printer_0��data_to_printer_1����
6���޸ĵĹ���δ��ʵ����������

20110506_100ppm_GP - V2.00.5.rar
1���������У׼ʱinput4���ܱ���ֵ�����⡣

20110506_100ppm_GP - V2.00.6.rar
1��ȥ���˵ϴ�������

20110506_100ppm_GP - V2.00.8.rar
1���޸ĵ��������ʾbug
2���޸������洿���д�������ʾ¶�������

20110506_100ppm_GP - V2.0.9.rar
1���޸ķ��󰴼�bug
2������record.c

---------------------------------------------------------------------------------------------------------------------------------------------------------------------
20110506_100ppm_GP - V1.01.0.rar  (ԭ����20110506_100ppm_GP,�������°汾):

20110506_100ppm_GP - V1.01.1.rar  (ԭ����20110506_100ppm_GP,�������°汾):
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
20110506_100ppm_GP - V3.00.0.rar
1��ԭΪ2.00.3�汾��������ʾ�汾��
*/