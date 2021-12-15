//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//    int i;
//    double p[4];
//    printf("******enterprise interest count******\nPA=");
//    scanf("%lf", &p[0]);
//    printf("PB=");
//    scanf("%lf", &p[1]);
//    printf("PC=");
//    scanf("%lf", &p[2]);
//    printf("PD=");
//    scanf("%lf", &p[3]);
//    for (i = 0; i <= 3; i++)
//    {
//        if (p[i] < 0)
//            p[i] = 0;
//        else if (p[i] <= 10)
//            p[i] = p[i] * 0.1;
//        else if (p[i] <= 20)
//            p[i] = 1 + (p[i] - 10) * 0.075;
//        else if (p[i] <= 40)
//            p[i] = 1.75 + (p[i] - 20) * 0.05;
//        else if (p[i] <= 60)
//            p[i] = 2.75 + (p[i] - 40) * 0.03;
//        else if (p[i] <= 100)
//            p[i] = 3.35 + (p[i] - 60) * 0.015;
//        else p[i] = 3.95 + (p[i] - 100) * 0.01;
//    }
//    printf("******enterprise employee bonus******\nA bonus is£º%0.2f\nB bonus is£º%0.2f\nC bonus is£º%0.2f\nD bonus is£º%0.2f\n", p[0], p[1], p[2], p[3]);
//    return 0;
//}