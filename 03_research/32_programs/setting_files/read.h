/*********************************   READ   *********************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ch 2

/****************************************************************************/

char filename1[100];

sprintf(filename1, "..//33_result//%s//raw_data//dat//%s.dat", date, name);

// ファイルの読み込み

fp1 = fopen(filename1, "r");
if (filename1 == NULL)
{
    printf("Error! I can't open the file.\n");
    exit(0);
}

// データの格納
int i = 0;
int N = 1000;
int num, data_long;
double ch1, ch2;
double value[N][ch];
int number[N];

// ch1:drag, ch2:lift
while ((fscanf(fp1, "%d\t%lf\t%lf", &num, &ch1, &ch2)) != EOF)
{
    number[i] = num;
    value[i][1] = ch1;
    value[i][2] = ch2;
    // printf("%d\t%lf\t%lf\n", number[i], value[i][1], value[i][2]);
    i = i + 1;
}

fclose(fp1);

data_long = i;