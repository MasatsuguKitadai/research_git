// range y (plot.c)

// 一括指定
const int max = 3;

// drag
int y_min1 = -max;
int y_max1 = max;

// lift
int y_min2 = -max;
int y_max2 = max;

// ファイル作成
char filename1[100];
char filename2[100];
char filename3[100];
char filename4[100];
char filename5[100];

// ファイルの指定 (plot)
sprintf(filename1, "..//33_result//%s//raw_data//dat//%s.dat", date, name);
sprintf(filename2, "..//33_result//%s//raw_data//drag//%s_drag.png", date, name);    
sprintf(filename3, "..//33_result//%s//raw_data//lift//%s_lift.png", date, name);  

// 開始点特定 (1)
sprintf(filename4, "..//33_result//%s//raw_data//dat//%s.dat", date, name);
sprintf(filename5, "..//33_result//%s//raw_data//start_point//%s_sp.dat", date, name);