#define _CRT_SECURE_NO_WARNINGS
#define N 4
#include <stdio.h>//û����ͷ�ļ�
#include <conio.h>
int array[N][N];
void convert(int array[][N])//ȱ����������//����ı�������
{
    int i, j, t;
    for (i = 0; i < N; i++)
        for (j = i + 1; j < N; j++)
        {
            t = array[i][j]; 
            array[i][j] = array[j][i]; 
            array[j][i] = t;
        }
}

int main()
{
    int i, j;
    printf("the input array elments:\n");
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
        {
            scanf("%d", &array[i][j]);
        }
    printf("\nthe src array:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%5d", array[i][j]);
        printf("\n");
    }

    convert(array);
    printf("the conv array:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%5d", array[i][j]);
        printf("\n");
    }

    _getch();
}