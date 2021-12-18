#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
int main()
{
    int num[4][3] = { 1,2,3,
                 4,5,6,
                 7,8,9,
                 10,11,12 };
    int i, j;
    for (i = 0; i < 4; i++)//ÐÐ
    {
        for (j = 0; j < 3; j++)//ÁÐ
            printf("%4d", num[i][j]);
        printf("\n");
    }
    _getch();
}