#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort();
int main()
{
	printf("������10�����֣�\n");
	bubble_sort();
	return 0;
}

void bubble_sort()
{
	int i, j, max, temp, a[10];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); //����10����
	}
	for (i = 0; i < 10; i++)
	{
		max = i;
		for (j = i + 1; j < 10; j++)
			if (a[max] < a[j])
				max = j;
		temp = a[i]; //����3�н�a[i+1]~a[10]����Сֵ��a[i]�Ի�
		a[i] = a[max];
		a[max] = temp;
	}
	printf("\n������:\n"); //������ź����10����
	for (i = 10 - 1; i >= 0; i--)
		printf("%5d", a[i]);
	printf("\n");
}
