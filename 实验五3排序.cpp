//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void b();
//int main()
//{
//	printf("������10�����֣�\n");
//	b();
//	return 0;
//}
//
//void b()
//{
//	int i, j, min, temp, a[10];
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]); //����10����
//	}
//	for (i = 0; i < 10; i++)
//	{
//		min = i;
//		for (j = i + 1; j < 10; j++)
//			if (a[min] > a[j])
//				min = j;
//		temp = a[i]; //����3�н�a[i+1]~a[10]����Сֵ��a[i]�Ի�
//		a[i] = a[min];
//		a[min] = temp;
//	}
//	printf("\n������:\n"); //������ź����10����
//	for (i = 10 - 1; i >= 0; i--)
//		printf("%5d", a[i]);
//	printf("\n");
//}
