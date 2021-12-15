//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()//思路：分开两个三角形进行打印
//{
//	int i;
//	printf("请输入一个奇数：\n");
//	scanf("%d", &i);//应判断是否为奇数
//	for (;0 == i % 2;)
//	{
//		printf("您输入的是偶数，请输入奇数：\n");
//		getchar();
//		scanf("%d", &i);
//	}
//	for (int j = 1; j <= (i + 1) / 2; j++)
//	{
//		for (int k = 1; k <= (i + 1)/2 -j; k++)//打空格//k是要打的个数，k = 中间数 - 行数
//			printf(" ");
//		for (int t = 1; t <= 2 * j - 1; t++)//打*//t是要打的个数,t = 行数*2 - 1
//			printf("*");
//		printf("\n");
//		
//	}
//	for (int j = (i -1)/2; j >=1 ; j--)
//	{
//		for (int k = 1; k <= (i + 1) / 2 - j; k++)
//			printf(" ");
//		for (int t = 1; t <= 2 * j - 1; t++)
//			printf("*");
//		printf("\n");
//
//	}
//	return 0;
//}