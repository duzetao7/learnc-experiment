#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int Fac(int n)
//{
//	int fn = 1;
//	while(n > 0)
//	{
//		fn = n * Fac(n - 1);
//		printf("%d�Ľ׳�Ϊ%3d\n", n, fn);
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
		printf("%d�Ľ׳�Ϊ%3d\n", n, fn);
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			fn = i * fn;
		}
		printf("%d�Ľ׳�Ϊ%3lld\n", n, fn);
		sn = fn + SumFac(n - 1);
	}
	return sn;
}

int main()//����1��n�Ľ׳�֮��*****��ǿ��*****
{
	int i = 1;
	int n = 0;
	unsigned long long sn = 0;
	unsigned long long fn = 1;
	printf("1.��ͨѭ��  2.�����ݹ�\n");
begin:
	printf("������Ҫ���еļ��㣺\n");
	scanf("%d", &i);
	switch (i)
	{
		case 1:
		{
			printf("����1��n�Ľ׳�֮�ͣ�");
			scanf("%d", &n);
			for (i = 1; i <= n; i++)//˼·��3�Ľ׳˵���2�Ľ׳˳���3��n�Ľ׳˵��ڣ�n-1���Ľ׳˳���n
			{
				fn *= i;
				printf("%d�Ľ׳���%llu\n", i, fn);
				sn += fn;
			}
			break;
		}
		case 2:
		{
			printf("����1��n�Ľ׳�֮�ͣ�");
			scanf("%d", &n);
			sn = SumFac(n);
			break;
		}
		default:
		{
			printf("�������\n");
		}
	}
	if (sn == 0)
	{
		goto begin;
	}
	printf("1��%d�Ľ׳�֮����%lld\n", n, sn);//�ϵ�

	return 0;
}