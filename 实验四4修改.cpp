//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    long sum = 0;
//    for (j = 1; j <= 3; j++)//3
//        for (i = 1;i <= 20; i++)//20
//        
//            sum = sum + (i + 1) * (i + 1) * (j + 2);
//            printf("sum is :%d\n", sum);
//    getchar();
//}//结果无变化，总次数无变化
//
//int main()
//{
//    int i, j, k;
//    long sum = 0;
//    for (j = 1; j <= 3; j++)
//    {
//        k = j + 2;
//        for (i = 1; i <= 20; i++)
//            sum = sum + (i + 1) * (i + 1) * k;
//    }
//    printf("sum is :%ld\n", sum);
//    getchar();
//}//结果一样