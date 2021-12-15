//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//    char a[4], b[4];
//    int i, j, t;
//    printf("******The Operation Digit******\n");
//    for (i = 0; i <= 3; i++)
//    {
//        printf("%c=", i + 65);
//        scanf("%c", &a[i]);
//        t = getchar();
//    }
//
//    //for (i = 0; i <= 3; i++)
//    //{
//    //    printf("%c=", i + 65);
//    //    scanf("%c", &a[i]);
//    //    getchar();
//    //}
//
//    for (i = 0; i <= 3; i++)
//        b[i] = a[i];
//    for (j = 3; j >= 1; j--)
//    {
//        for (i = 0; i <= j; i++)
//        {
//            if (a[i + 1] > a[i])
//            {
//                b[i + 1] = a[i];
//                b[i] = a[i + 1];
//                a[i] = b[i];
//                a[i + 1] = b[i + 1];
//            }
//        }
//    }
//    printf("******The Result Sequence******\nSEQ ASCEND: %c %c %c %c\nSEQ DESCEND:%c %c %c %c", a[3], a[2], a[1], a[0], a[0], a[1], a[2], a[3]);
//    return 0;
//}
//
//
