#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Fac(int n)
//{
//	int fn = 1;
//	while(n > 0)
//	{
//		fn = n * Fac(n - 1);
//		printf("%d的阶乘为%3d\n", n, fn);
//		return fn;
//	}
//}
//
//int SumFac(int n)
//{
//	int fn = 1;
//	static int sn = 0;
//	for (int i = n; i > 0; i--)
//	{
//		fn = n * fn;
//	}
//	while (n > 0)
//	{
//		sn = fn + SumFac(n - 1);
//	}
//	return sn;
//}

int Fac(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Fac(n - 1);
	}
}

int SumFac(int n)
{
	unsigned long long sn = 0;
	unsigned long long fn = 1;
	if (n == 1)
	{
		sn = 1;
		printf("%d的阶乘为%3d\n", n, fn);
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			fn = i * fn;
		}
		printf("%d的阶乘为%3lld\n", n, fn);
		sn = fn + SumFac(n - 1);
	}
	return sn;
}

int main()//计算1到n的阶乘之和*****加强版*****
{
	int i = 1;
	int n = 0;
	unsigned long long sn = 0;
	unsigned long long fn = 1;
	printf("1.普通循环  2.函数递归\n");
begin:
	printf("请输入要进行的计算：\n");
	scanf("%d", &i);
	switch (i)
	{
		case 1:
		{
			printf("计算1到n的阶乘之和：");
			scanf("%d", &n);
			for (i = 1; i <= n; i++)//思路：3的阶乘等于2的阶乘乘以3，n的阶乘等于（n-1）的阶乘乘以n
			{
				fn *= i;
				printf("%d的阶乘是%llu\n", i, fn);
				sn += fn;
			}
			break;
		}
		case 2:
		{
			printf("计算1到n的阶乘之和：");
			scanf("%d", &n);
			sn = SumFac(n);
			break;
		}
		default:
		{
			printf("输入错误\n");
		}
	}
	if (sn == 0)
	{
		goto begin;
	}
	printf("1到%d的阶乘之和是%lld\n", n, sn);//断点

	return 0;
}