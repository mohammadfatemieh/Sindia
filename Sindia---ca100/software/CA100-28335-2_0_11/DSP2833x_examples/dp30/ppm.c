#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

const float hump[][10]=//0.0 --- -100.0
{
6092.22,6046.96,5997.01,5947.45,5898.26,5849.44,5800.99,5752.92,5705.20,5657.86,
5606.20,5564.24,5517.96,5472.04,5426.47,5381.25,5336.37,5291.84,5247.64,5203.79,
5155.95,5117.09,5074.23,5031.71,4989.51,4947.64,4906.09,4864.86,4823.95,4783.35,
4739.08,4703.10,4663.44,4624.08,4585.03,4546.28,4507.83,4469.68,4431.83,4394.27,
4353.30,4320.02,4283.33,4246.93,4210.81,4174.97,4139.41,4104.13,4069.12,4034.39,
3996.52,3965.74,3931.82,3898.17,3864.78,3831.65,3798.78,3766.17,3733.81,3701.72,
3666.71,3638.28,3606.93,3575.84,3544.98,3514.38,3484.01,3453.89,3424.00,3394.36,
3362.03,3335.77,3306.82,3278.10,3249.62,3221.36,3193.32,3165.51,3137.92,3110.55,
3080.71,3056.47,3029.76,3003.25,2976.96,2950.89,2925.02,2899.36,2873.90,2848.65,
2821.12,2798.76,2774.12,2749.68,2725.43,2701.38,2677.52,2653.86,2630.39,2607.11,
2581.73,2561.11,2538.40,2515.86,2493.52,2471.35,2449.36,2427.56,2405.93,2384.48,
2361.09,2342.10,2321.17,2300.41,2279.82,2259.41,2239.16,2219.07,2199.15,2179.40,
2157.86,2140.38,2121.11,2102.00,2083.04,2064.25,2045.61,2027.12,2008.79,1990.61,
1970.80,1954.70,1936.97,1919.39,1901.95,1884.66,1867.52,1850.51,1833.65,1816.93,
1798.71,1783.91,1767.61,1751.44,1735.41,1719.51,1703.75,1688.12,1672.62,1657.25,
1640.51,1626.91,1611.93,1597.07,1582.34,1567.74,1553.26,1538.90,1524.66,1510.55,
1495.16,1482.68,1468.92,1455.28,1441.75,1428.34,1415.05,1401.87,1388.80,1375.84,
1361.73,1350.26,1337.64,1325.12,1312.71,1300.41,1288.21,1276.12,1264.13,1252.25,
1239.30,1228.79,1217.21,1205.73,1194.35,1183.07,1171.89,1160.81,1149.82,1138.92,
1127.05,1117.42,1106.81,1096.29,1085.87,1075.53,1065.29,1055.13,1045.06,1035.09,
1024.22,1015.39,1005.68,996.04,986.50,977.03,967.65,958.36,949.14,940.01,
930.06,921.99,913.09,904.28,895.54,886.89,878.31,869.80,861.37,853.02,
843.92,836.53,828.40,820.34,812.36,804.44,796.60,788.82,781.12,773.48,
765.17,758.42,750.99,743.62,736.32,729.09,721.93,714.83,707.79,700.81,
693.22,687.06,680.27,673.55,666.89,660.28,653.74,647.26,640.84,634.47,
627.54,621.92,615.73,609.59,603.52,597.49,591.53,585.61,579.76,573.95,
567.63,562.51,556.86,551.27,545.73,540.24,534.80,529.41,524.07,518.79,
513.03,508.36,503.21,498.12,493.07,488.07,483.12,478.21,473.35,468.54,
463.29,459.04,454.36,449.72,445.13,440.58,436.07,431.61,427.19,422.80,
418.04,414.17,409.91,405.69,401.51,397.38,393.28,389.22,385.20,381.22,
376.88,373.36,369.49,365.66,361.87,358.11,354.38,350.69,347.04,343.42,
339.49,336.29,332.78,329.30,325.85,322.44,319.06,315.71,312.40,309.11,
305.54,302.64,299.45,296.30,293.17,290.07,287.01,283.97,280.96,277.99,
274.75,272.12,269.23,266.37,263.53,260.73,257.95,255.20,252.47,249.78,
246.84,244.46,241.84,239.25,236.68,234.14,231.63,229.13,226.67,224.23,
221.57,219.41,217.04,214.70,212.38,210.08,207.80,205.55,203.32,201.11,
198.70,196.76,194.61,192.49,190.39,188.31,186.26,184.22,182.20,180.21,
178.04,176.28,174.34,172.42,170.53,168.65,166.79,164.95,163.13,161.33,
159.37,157.78,156.03,154.30,152.59,150.90,149.22,147.56,145.92,144.29,
142.52,141.09,139.52,137.96,136.41,134.88,133.37,131.88,130.40,128.93,
127.34,126.05,124.63,123.22,121.83,120.46,119.09,117.75,116.41,115.10,
113.66,112.50,111.22,109.96,108.70,107.47,106.24,105.03,103.83,102.64,
101.35,100.31,99.16,98.02,96.90,95.78,94.68,93.59,92.51,91.45,
90.29,89.35,88.32,87.30,86.28,85.29,84.30,83.32,82.35,81.39,
80.35,79.51,78.58,77.66,76.76,75.86,74.97,74.10,73.23,72.37,
71.44,70.68,69.85,69.03,68.21,67.41,66.61,65.83,65.05,64.28,
63.44,62.77,62.02,61.28,60.56,59.84,59.12,58.42,57.72,57.03,
56.29,55.68,55.01,54.35,53.70,53.06,52.42,51.79,51.17,50.55,
49.88,49.34,48.75,48.16,47.57,47.00,46.43,45.87,45.31,44.76,
44.16,43.68,43.15,42.62,42.10,41.59,41.08,40.58,40.08,39.59,
39.05,38.62,38.15,37.68,37.22,36.76,36.30,35.86,35.41,34.97,
34.50,34.11,33.69,33.27,32.86,32.45,32.05,31.65,31.26,30.87,
30.44,30.10,29.72,29.35,28.98,28.62,28.26,27.91,27.55,27.21,
26.83,26.53,26.19,25.86,25.53,25.21,24.89,24.58,24.26,23.96,
23.62,23.35,23.05,22.76,22.47,22.18,21.90,21.62,21.34,21.07,
20.77,20.53,20.27,20.01,19.75,19.50,19.24,19.00,18.75,18.51,
18.24,18.03,17.80,17.57,17.34,17.11,16.89,16.67,16.45,16.24,
16.01,15.82,15.61,15.41,15.20,15.00,14.81,14.61,14.42,14.23,
14.02,13.86,13.67,13.49,13.32,13.14,12.96,12.79,12.62,12.46,
12.27,12.13,11.96,11.80,11.65,11.49,11.34,11.19,11.04,10.89,
10.73,10.60,10.46,10.31,10.18,10.04,9.903,9.769,9.637,9.506,
9.365,9.250,9.125,9.001,8.878,8.758,8.638,8.520,8.404,8.289,
8.165,8.064,7.954,7.844,7.737,7.630,7.526,7.422,7.320,7.219,
7.109,7.021,6.924,6.828,6.733,6.640,6.548,6.457,6.367,6.278,
6.182,6.104,6.019,5.935,5.852,5.770,5.689,5.609,5.531,5.453,
5.369,5.301,5.226,5.152,5.079,5.008,4.937,4.867,4.798,4.730,
4.656,4.596,4.531,4.466,4.403,4.340,4.278,4.217,4.156,4.097,
4.032,3.980,3.923,3.867,3.811,3.756,3.702,3.649,3.596,3.544,
3.487,3.442,3.392,3.343,3.294,3.246,3.199,3.152,3.106,3.061,
3.012,2.972,2.929,2.886,2.843,2.802,2.761,2.720,2.680,2.640,
2.598,2.563,2.525,2.488,2.451,2.415,2.379,2.343,2.309,2.274,
2.237,2.207,2.174,2.141,2.109,2.078,2.047,2.016,1.986,1.956,
1.924,1.897,1.869,1.841,1.813,1.785,1.758,1.732,1.706,1.680,
1.652,1.629,1.604,1.580,1.556,1.532,1.508,1.485,1.463,1.440,
1.416,1.396,1.375,1.354,1.333,1.312,1.292,1.272,1.252,1.233,
1.212,1.195,1.177,1.158,1.140,1.123,1.105,1.088,1.071,1.054,
1.036,1.021,1.005,0.990,0.974,0.959,0.944,0.929,0.914,0.900,
0.884,0.871,0.858,0.844,0.831,0.817,0.804,0.792,0.779,0.767,
0.753,0.742,0.730,0.719,0.707,0.696,0.685,0.674,0.663,0.652,
0.641,0.631,0.621,0.611,0.601,0.591,0.582,0.572,0.563,0.554,
0.544,0.536,0.527,0.519,0.510,0.502,0.494,0.485,0.477,0.470,
0.461,0.454,0.447,0.439,0.432,0.425,0.418,0.411,0.404,0.398,
0.390,0.384,0.378,0.372,0.366,0.359,0.353,0.347,0.342,0.336,
0.330,0.325,0.319,0.314,0.309,0.303,0.298,0.293,0.288,0.283,
0.278,0.274,0.269,0.265,0.260,0.256,0.251,0.247,0.243,0.239,
0.234,0.230,0.227,0.223,0.219,0.215,0.211,0.208,0.204,0.201,
0.197,0.194,0.190,0.187,0.184,0.181,0.177,0.174,0.171,0.168,
0.165,0.162,0.160,0.157,0.154,0.151,0.149,0.146,0.143,0.141,
0.138,0.136,0.134,0.131,0.129,0.127,0.124,0.122,0.120,0.118,
0.115,0.114,0.112,0.110,0.108,0.106,0.104,0.102,0.100,0.098,
};



const Uint16 HumpTo20[][21]=
{
59,57,55,53,51,50,47,45,42,40,38,36,35,33,31,30,28,27,25,24,23,
71,68,66,64,62,60,57,54,51,48,46,44,42,39,38,36,34,32,31,29,28,
82,80,77,74,72,70,66,63,60,57,54,51,49,46,44,42,40,38,36,34,33,
94,91,88,85,82,80,76,72,68,65,62,58,56,53,50,48,45,43,41,39,37,
106,102,99,96,92,90,85,81,77,73,69,66,63,60,57,54,51,49,47,44,42,
118,114,110,106,103,100,95,90,85,81,77,73,70,66,63,60,57,54,52,49,47,
129,125,121,117,113,110,104,99,94,89,85,81,77,73,70,66,63,60,57,54,52,
141,136,132,127,123,120,113,108,102,97,93,88,84,80,76,72,69,66,62,60,57,
153,148,143,138,134,130,123,117,111,106,100,96,91,87,82,78,75,71,68,65,62,
165,159,154,149,144,140,132,126,120,114,108,103,98,93,89,85,81,77,73,70,66,
176,170,165,159,154,150,142,135,128,122,116,110,105,100,95,91,86,82,79,75,71,
188,182,176,170,164,160,151,144,137,130,124,118,112,107,102,97,92,88,84,80,76,
205,197,189,182,176,170,161,153,145,138,132,125,119,114,108,103,98,94,89,85,81,
217,209,201,193,186,180,170,162,154,147,140,133,126,120,115,109,104,99,95,90,86,
229,220,212,204,196,190,180,171,163,155,147,140,134,127,121,116,110,105,100,95,91,
241,232,223,214,207,200,189,180,171,163,155,148,141,134,128,122,116,111,105,101,96,
253,243,234,225,217,210,199,189,180,171,163,155,148,141,134,128,122,116,111,106,101,
265,255,245,236,227,220,208,198,189,179,171,163,155,148,141,134,128,122,116,111,106,
277,266,256,247,238,230,218,207,197,188,179,170,162,154,147,140,134,128,122,116,111,
289,278,267,257,248,240,227,216,206,196,187,178,169,161,154,147,140,133,127,121,116,
301,289,278,268,258,250,237,225,214,204,194,185,176,168,160,153,146,139,133,126,121,
313,301,290,279,268,260,246,234,223,212,202,193,184,175,167,159,152,145,138,132,126,
325,312,301,289,279,270,256,243,232,221,210,200,191,182,173,165,158,150,143,137,131,
337,324,312,300,289,280,265,252,240,229,218,208,198,189,180,172,164,156,149,142,136,
349,336,323,311,299,290,275,261,249,237,226,215,205,195,186,178,170,162,154,147,141,
361,347,334,322,310,300,284,271,258,245,234,223,212,202,193,184,176,167,160,152,146,
373,359,345,332,320,310,294,280,266,254,242,230,219,209,199,190,181,173,165,158,151,
385,370,356,343,330,320,303,289,275,262,249,238,227,216,206,197,187,179,171,163,156,
397,382,367,354,341,330,313,298,283,270,257,245,234,223,213,203,193,185,176,168,161,
409,393,378,364,351,340,322,307,292,278,265,253,241,230,219,209,199,190,182,173,166,
421,405,389,375,361,350,332,316,301,287,273,260,248,237,226,215,205,196,187,179,171,
433,416,401,386,372,360,341,325,309,295,281,268,255,243,232,222,211,202,193,184,176,
445,428,412,396,382,370,351,334,318,303,289,275,263,250,239,228,217,208,198,189,181,
457,439,423,407,392,380,360,343,327,311,297,283,270,257,245,234,223,213,204,194,186,
469,451,434,418,403,390,370,352,335,320,305,290,277,264,252,240,229,219,209,200,191,
481,462,445,428,413,400,379,361,344,328,312,298,284,271,259,247,235,225,215,205,196,
505,483,463,444,425,410,389,370,353,336,320,305,291,278,265,253,241,230,220,210,201,
517,495,474,454,436,420,398,379,361,344,328,313,298,285,272,259,247,236,226,215,206,
529,507,485,465,446,430,408,388,370,353,336,321,306,292,278,266,253,242,231,221,211,
541,518,497,476,456,440,417,397,379,361,344,328,313,298,285,272,259,248,237,226,216,
554,530,508,487,467,450,427,406,387,369,352,336,320,305,291,278,266,254,242,231,221,
566,542,519,498,477,460,436,415,396,377,360,343,327,312,298,284,272,259,248,236,226,
578,554,530,508,488,470,446,424,405,386,368,351,335,319,305,291,278,265,253,242,231,
590,565,542,519,498,480,455,434,413,394,376,358,342,326,311,297,284,271,259,247,236,
603,577,553,530,508,490,465,443,422,402,383,366,349,333,318,303,290,277,264,252,241,
615,589,564,541,519,500,474,452,431,410,391,373,356,340,324,310,296,282,270,258,246,
627,600,575,552,529,510,484,461,439,419,399,381,363,347,331,316,302,288,275,263,251,
639,612,587,562,539,520,493,470,448,427,407,388,371,354,338,322,308,294,281,268,256,
652,624,598,573,550,530,503,479,456,435,415,396,378,361,344,329,314,300,286,274,261,
664,636,609,584,560,540,512,488,465,444,423,404,385,367,351,335,320,305,292,279,266,
676,647,620,595,570,550,522,497,474,452,431,411,392,374,357,341,326,311,297,284,272,
688,659,632,605,581,560,531,506,482,460,439,419,399,381,364,348,332,317,303,289,277,
700,671,643,616,591,570,541,515,491,468,447,426,407,388,371,354,338,323,308,295,282,
713,682,654,627,601,580,550,524,500,477,455,434,414,395,377,360,344,329,314,300,287,
725,694,665,638,612,590,560,533,508,485,463,441,421,402,384,367,350,334,320,305,292,
737,706,676,649,622,600,569,542,517,493,470,449,428,409,390,373,356,340,325,311,297,
749,718,688,659,633,610,579,551,526,501,478,456,436,416,397,379,362,346,331,316,302,
761,729,699,670,643,620,588,561,534,510,486,464,443,423,404,386,368,352,336,321,307,
774,741,710,681,653,630,598,570,543,518,494,472,450,430,410,392,374,358,342,327,312,
786,753,721,692,664,640,607,579,552,526,502,479,457,437,417,398,380,363,347,332,317,
798,764,733,703,674,650,617,588,560,535,510,487,465,444,424,405,386,369,353,337,322,
810,776,744,713,684,660,626,597,569,543,518,494,472,450,430,411,393,375,358,343,328,
823,788,755,724,695,670,636,606,578,551,526,502,479,457,437,417,399,381,364,348,333,
835,800,766,735,705,680,645,615,587,559,534,509,486,464,443,424,405,387,370,353,338,
847,811,778,746,715,690,655,624,595,568,542,517,494,471,450,430,411,392,375,359,343,
859,823,789,756,726,700,664,633,604,576,550,525,501,478,457,436,417,398,381,364,348,
871,835,800,767,736,710,674,642,613,584,558,532,508,485,463,443,423,404,386,369,353,
884,863,811,778,746,720,683,651,621,593,566,540,515,492,470,449,429,410,392,375,358,
917,874,834,796,761,730,693,660,630,601,573,547,523,499,477,455,435,416,397,380,363,
929,886,846,807,771,740,702,669,639,609,581,555,530,506,483,462,441,422,403,385,368,
942,898,857,818,781,750,712,679,647,618,589,563,537,513,490,468,447,427,409,391,374,
954,910,868,829,792,760,721,688,656,626,597,570,544,520,497,474,453,433,414,396,379,
967,922,880,840,802,770,731,697,665,634,605,578,552,527,503,481,459,439,420,401,384,
979,934,891,851,813,780,740,706,673,642,613,585,559,534,510,487,466,445,425,407,389,
992,946,903,862,823,790,750,715,682,651,621,593,566,541,516,493,472,451,431,412,394,
1004,958,914,873,833,800,759,724,691,659,629,600,573,548,523,500,478,457,437,417,399,
1017,970,925,883,844,810,769,733,699,667,637,608,581,555,530,506,484,462,442,423,404,
1029,982,937,894,854,820,778,742,708,676,645,616,588,562,536,513,490,468,448,428,409,
1041,993,948,905,865,830,788,751,717,684,653,623,595,568,543,519,496,474,453,433,415,
1054,1005,959,916,875,840,797,760,725,692,661,631,602,575,550,525,502,480,459,439,420,
1066,1017,971,927,885,850,807,769,734,700,669,638,610,582,556,532,508,486,464,444,425,
1079,1029,982,938,896,860,816,778,743,709,677,646,617,589,563,538,514,492,470,450,430,
1091,1041,994,949,906,870,826,788,751,717,685,654,624,596,570,544,520,497,476,455,435,
1104,1053,1005,960,917,880,835,797,760,725,692,661,631,603,576,551,526,503,481,460,440,
1116,1065,1016,970,927,890,845,806,769,734,700,669,639,610,583,557,533,509,487,466,445,
1129,1077,1028,981,937,900,854,815,777,742,708,676,646,617,590,564,539,515,492,471,451,
1141,1089,1039,992,948,910,864,824,786,750,716,684,653,624,596,570,545,521,498,476,456,
1153,1100,1050,1003,958,920,873,833,795,759,724,692,661,631,603,576,551,527,504,482,461,
1166,1112,1062,1014,969,930,883,842,804,767,732,699,668,638,610,583,557,533,509,487,466,
1178,1124,1073,1025,979,940,892,851,812,775,740,707,675,645,616,589,563,538,515,493,471,
1191,1136,1084,1036,989,950,902,860,821,784,748,714,682,652,623,595,569,544,521,498,476,
1203,1148,1096,1047,1000,960,911,869,830,792,756,722,690,659,630,602,575,550,526,503,481,
1216,1160,1107,1057,1010,970,921,878,838,800,764,730,697,666,636,608,581,556,532,509,487,
1228,1172,1119,1068,1021,980,930,888,847,808,772,737,704,673,643,615,588,562,537,514,492,
1241,1184,1130,1079,1031,990,940,897,856,817,780,745,712,680,650,621,594,568,543,519,497,
1282,1218,1158,1100,1046,1000,949,906,864,825,788,752,719,687,656,627,600,574,549,525,502,
1295,1230,1169,1111,1057,1010,959,915,873,833,796,760,726,694,663,634,606,579,554,530,507,
1308,1242,1181,1122,1067,1020,968,924,882,842,804,768,733,701,670,640,612,585,560,536,512,
1320,1254,1192,1133,1078,1030,978,933,890,850,812,775,741,708,676,647,618,591,565,541,518,
1333,1266,1204,1144,1088,1040,987,942,899,858,820,783,748,715,683,653,624,597,571,546,523,
1346,1278,1215,1155,1099,1050,997,951,908,867,828,790,755,722,690,659,630,603,577,552,528,
1358,1291,1227,1166,1109,1060,1009,960,916,875,836,798,762,729,696,666,637,609,582,557,533,
1371,1303,1238,1177,1119,1070,1016,969,925,883,843,806,770,736,703,672,643,615,588,563,538,
1384,1315,1250,1188,1130,1080,1025,978,934,892,851,813,777,743,710,679,649,621,594,568,543,
1396,1327,1261,1199,1140,1090,1035,987,943,900,859,821,784,750,716,685,655,626,599,573,549,
1409,1339,1273,1210,1151,1100,1044,997,951,908,867,829,792,757,723,691,661,632,605,579,554,
1422,1351,1284,1221,1161,1110,1054,1006,960,917,875,836,799,764,730,698,667,638,611,584,559,
1435,1363,1296,1232,1172,1120,1063,1015,969,925,883,844,806,771,737,704,673,644,616,590,564,
1447,1375,1307,1243,1182,1130,1073,1024,977,933,891,851,814,777,743,711,680,650,622,595,569,
1460,1387,1319,1254,1193,1140,1082,1033,986,941,899,859,821,784,750,717,686,656,627,600,575,
1473,1399,1330,1265,1203,1150,1092,1042,995,950,907,867,828,791,757,723,692,662,633,606,580,
1485,1411,1342,1276,1213,1160,1102,1051,1003,958,915,874,835,798,763,730,698,668,639,611,585,
1498,1423,1353,1287,1224,1170,1111,1060,1012,966,923,882,843,805,770,736,704,674,644,617,590,
1511,1435,1365,1298,1234,1180,1121,1069,1021,975,931,889,850,812,777,743,710,679,650,622,595,
1523,1448,1376,1309,1245,1190,1130,1078,1030,983,939,897,857,819,783,749,716,685,656,627,600,
1536,1460,1388,1320,1255,1200,1140,1088,1038,991,947,905,865,826,790,755,723,691,661,633,606,
1549,1472,1399,1330,1266,1210,1149,1097,1047,1000,955,912,872,833,797,762,729,697,667,638,611,
1561,1484,1411,1341,1276,1220,1159,1106,1056,1008,963,920,879,840,803,768,735,703,673,644,616,
1574,1496,1422,1352,1287,1230,1168,1115,1064,1016,971,928,886,847,810,775,741,709,678,649,621,
1587,1508,1434,1363,1297,1240,1178,1124,1073,1025,979,935,894,854,817,781,747,715,684,654,626,
1599,1520,1445,1374,1307,1250,1187,1133,1082,1033,987,943,901,861,824,788,753,721,690,660,632,
1612,1532,1457,1385,1318,1260,1197,1142,1090,1041,995,950,908,868,830,794,759,727,695,665,637,
1625,1544,1468,1396,1328,1270,1206,1151,1099,1050,1003,958,916,875,837,800,766,732,701,671,642,
1637,1556,1479,1407,1339,1280,1216,1160,1108,1058,1011,966,923,882,844,807,772,738,706,676,647,
1650,1568,1491,1418,1349,1290,1225,1169,1117,1066,1019,973,930,889,850,813,778,744,712,682,652,
1663,1580,1502,1429,1360,1300,1235,1179,1125,1075,1027,981,938,896,857,820,784,750,718,687,658,
1675,1592,1514,1440,1370,1310,1244,1188,1134,1083,1035,989,945,903,864,826,790,756,723,692,663,
1688,1604,1525,1451,1380,1320,1254,1197,1143,1091,1043,996,952,910,870,832,796,762,729,698,668,
1701,1616,1537,1462,1391,1330,1263,1206,1151,1100,1051,1004,960,917,877,839,802,768,735,703,673,
1713,1629,1548,1473,1401,1340,1273,1215,1160,1108,1059,1012,967,924,884,845,809,774,740,709,678,
1726,1641,1560,1484,1412,1350,1282,1224,1169,1116,1067,1019,974,931,891,852,815,780,746,714,684,
1739,1653,1571,1495,1422,1360,1292,1233,1177,1125,1074,1027,981,938,897,858,821,786,752,720,689,
1751,1665,1583,1506,1433,1370,1301,1242,1186,1133,1082,1034,989,945,904,865,827,791,757,725,694,
1764,1677,1594,1517,1443,1380,1311,1251,1195,1141,1090,1042,996,952,911,871,833,797,763,730,699,
1777,1689,1606,1528,1454,1390,1320,1260,1204,1150,1098,1050,1003,959,917,877,839,803,769,736,704,
1789,1701,1617,1538,1464,1400,1330,1270,1212,1158,1106,1057,1011,966,924,884,846,809,774,741,710,
1802,1713,1629,1549,1474,1410,1339,1279,1221,1166,1114,1065,1018,973,931,890,852,815,780,747,715,
1815,1725,1640,1560,1485,1420,1349,1288,1230,1175,1122,1073,1025,980,938,897,858,821,786,752,720,
1827,1737,1652,1571,1495,1430,1358,1297,1238,1183,1130,1080,1033,987,944,903,864,827,791,758,725,
1840,1749,1663,1582,1506,1440,1368,1306,1247,1191,1138,1088,1040,994,951,910,870,833,797,763,730,
1853,1761,1675,1593,1516,1450,1377,1315,1256,1200,1146,1096,1047,1001,958,916,876,839,803,768,736,
1865,1773,1686,1604,1527,1460,1387,1324,1265,1208,1154,1103,1055,1008,964,922,883,845,808,774,741,
1878,1785,1698,1615,1537,1470,1396,1333,1273,1216,1162,1111,1062,1015,971,929,889,851,814,779,746,
1891,1797,1709,1626,1547,1480,1406,1342,1282,1225,1170,1118,1069,1022,978,935,895,856,820,785,751,
1903,1809,1721,1637,1558,1490,1415,1351,1291,1233,1178,1126,1077,1029,985,942,901,862,825,790,757,
1916,1821,1732,1648,1568,1500,1425,1361,1299,1241,1186,1134,1084,1036,991,948,907,868,831,796,762,
};

float ppm_backup,ppm_backup20;
float ppm_convert(float ppm,float x)//1---����0---��ȷ
{
    float temp,temp1,m,n;Uint16 i,j;

	if(ppm==0xffff)return 0xffff;
    if (c_temp==100.0)return 0;
//	if (hump_temp==0)return 1;
    if((c_temp<=35.0 && c_temp>=15.0) && (ppm<=1500 && ppm>=50))
	{
        i=(Uint16)c_temp-15;
		j=ppm/10-5;m=HumpTo20[j][i];n=HumpTo20[j+1][i];
		temp=m+(n-m)*(ppm-(ppm/10)*10)/10;
		return temp;
	}
	else if (c_temp<=20.0)
	{
	    temp1=20.0-c_temp;
        if (ppm<160.0) temp1=x+temp1*1.0;
		else if (ppm<400.0)temp1=x+temp1*2.0;
		else if (ppm<720.0)temp1=x+temp1*3.0;
		else if (ppm<1000.0)temp1=x+temp1*4.0;
		else temp1=x+temp1*5.0;
	}
	else if (c_temp>20.0)
	{
	    temp1=c_temp-20.0;
        temp1=x-temp1*5.0;
	}
	else return 0;

	if (temp1>0.0||temp1<-700.0)return 0;
    i=(Uint16)(-temp1);
	j=i%10;
    i=(i-j)/10;
    temp1=hump[i][j];

	return temp1;
}


Uint16 ppm_do(float x,Uint16 switch1)
{
    Uint16 i,j;
    if(x<-800.0||x>+600.0) return ERROR;
	else if(switch1==0)
	{
		display_fp_ascii(M24,0xffff,0x0000,1,35,24,x*0.1,"��");
	}
    else if(x<=0.0)
	{
	    display_fp_ascii(M24,0x0000,0x0000,1,35,24,x*0.1,"��");
	    i=(Uint16)(-x);
		j=i%10;
        i=(i-j)/10;
        ppm_backup=hump[i][j];
        ppm_backup20=ppm_convert(ppm_backup,x);

        display_fp4(M16,0xf800,0x0000,1,35,24,ppm_backup,"uL/L");
	    display_fp4(M16,0xf800,0x0000,1,35+100,24,ppm_backup20,"uL/L,+20C");
	}
	else if(x>0.0)
	{
	    ppm_backup=8000.0;
        ppm_backup20=8000.0;
	    display_ascii(M16,0xF800,0x0000,1,35,24,">6033uL/L");

	}
    return OK;
}

Uint16 ppm_do_0(float x,Uint16 switch1,Uint16 number)
{
    Uint16 i,j;
    if(x<-800.0||x>+600.0) return ERROR;


	else if(switch1==0)
	{
	    display_fp4(M16,0x0000,0x0000,1,56,24+number*46,ppm_backup,"uL/L(");
	    display_fp4(M16,0x0000,0x0000,1,56+100,24+number*46,ppm_backup20,"uL/L,+20C)");
		display_fp_ascii(M24,0xffff,0x0000,1,56,21+number*46,x*0.1,"��");
		i=(Uint16)(-x);
		j=i%10;
        i=(i-j)/10;
        ppm_backup=hump[i][j];
        ppm_backup20=ppm_convert(ppm_backup,x);
	}
    else if(x<=0.0)
	{
	    display_fp_ascii(M24,0x0000,0x0000,1,56,21+number*46,x*0.1,"��");
	    i=(Uint16)(-x);
		j=i%10;
        i=(i-j)/10;
        ppm_backup=hump[i][j];
        ppm_backup20=ppm_convert(ppm_backup,x);

        display_fp4(M16,0xf800,0x0000,1,56,24+number*46,ppm_backup,"uL/L(");
	    display_fp4(M16,0xf800,0x0000,1,56+100,24+number*46,ppm_backup20,"uL/L,+20C)");
	}
	else if(x>0.0)
	{
	    ppm_backup=6033.0;
        ppm_backup20=6033.0;
	    display_fp_ascii(M24,0x0000,0x0000,1,56,21+number*46,x*0.1,"��");
	    display_ascii(M16,0xF800,0x0000,1,56,24+number*46,">6033uL/L");

	}
    return OK;
}

Uint16 ha100_ppm_do(float x)
{
    Uint16 i,j;
    if(x<-800.0||x>+600.0) return ERROR;
	else if(x<=0.0)
	{
	    i=(Uint16)(-x);
		j=i%10;
        i=(i-j)/10;
        ppm_backup=hump[i][j];
        ppm_backup20=ppm_convert(ppm_backup,x);
        
	//	display_ascii(M24,0,0x0000,1,110,38+60,"            ");
	//	display_ascii(M24,0,0x0000,1,110,38+120,"            ");
        display_fp4(M24,0xffff,0x0000,1,110,38+60,ppm_backup,"uL/L  ");
	    display_fp4(M24,0xffff,0x0000,1,110,38+120,ppm_backup20,"uL/L  ");
	}
	else if(x>0.0)
	{
	    ppm_backup=6033.0;
        ppm_backup20=6033.0;
	    display_ascii(M24,0xffff,0x0000,1,110,38+60,">6033uL/L  ");
        display_ascii(M24,0xffff,0x0000,1,110,38+120,"******      ");
	}
    return OK;
}


