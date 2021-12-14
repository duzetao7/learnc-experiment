//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void b();
//int main()
//{
//	printf("请输入10个数字：\n");
//	b();
//	return 0;
//}
//
//void b()
//{
//	int i, j, min, temp, a[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]); //输入10个数
//	}
//	for (i = 0; i < 10; i++)
//	{
//		min = i;
//		for (j = i + 1; j < 10; j++)
//			if (a[min] > a[j])
//				min = j;
//		temp = a[i]; //以下3行将a[i+1]~a[10]中最小值与a[i]对换
//		a[i] = a[min];
//		a[min] = temp;
//	}
//	printf("\n排序结果:\n"); //输出已排好序的10个数
//	for (i = 10 - 1; i >= 0; i--)
//		printf("%5d", a[i]);
//	printf("\n");
//}
