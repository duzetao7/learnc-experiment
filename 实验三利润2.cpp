//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i, level;
//    float p[4];
//    printf("******enterprise interest count******\nPA=");
//    scanf("%f", &p[0]);
//    printf("PB=");
//    scanf("%f", &p[1]);
//    printf("PC=");
//    scanf("%f", &p[2]);
//    printf("PD=");
//    scanf("%f", &p[3]);
//    for (i = 0; i <= 3; i++)
//    {
//        if (p[i] < 0)level = 1;
//        else if (p[i] <= 10)level = 2;
//        else if (p[i] <= 20)level = 3;
//        else if (p[i] <= 40)level = 4;
//        else if (p[i] <= 60)level = 5;
//        else if (p[i] <= 100)level = 6;
//        else level = 7;
//        switch (level)
//        {
//        case 1:p[i] = 0;break;
//        case 2:p[i] = p[i] * 0.1;break;
//        case 3:p[i] = 1 + (p[i] - 10) * 0.075;break;
//        case 4:p[i] = 1.75 + (p[i] - 20) * 0.05;break;
//        case 5:p[i] = 2.75 + (p[i] - 40) * 0.03;break;
//        case 6:p[i] = 3.35 + (p[i] - 60) * 0.015;break;
//        case 7:p[i] = 3.95 + (p[i] - 100) * 0.01;break;
//        }
//    }
//    printf("*****enterprise employee bonus*****\nA bonus is£º=%0.2f\nB bonus is£º=%0.2f\nC bonus is£º=%0.2f\nD bonus is£º=%0.2f\n", p[0], p[1], p[2], p[3]);
//    return 0;
//}