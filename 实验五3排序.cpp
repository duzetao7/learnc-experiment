#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void bubble_sort();
int main()
{
	printf("请输入10个数字：\n");
	bubble_sort();
	return 0;
}

void bubble_sort()
{
	int i, j, max, temp, a[10];
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]); //输入10个数
	}
	for (i = 0; i < 10; i++)
	{
		max = i;
		for (j = i + 1; j < 10; j++)
			if (a[max] < a[j])
				max = j;
		temp = a[i]; //以下3行将a[i+1]~a[10]中最小值与a[i]对换
		a[i] = a[max];
		a[max] = temp;
	}
	printf("\n排序结果:\n"); //输出已排好序的10个数
	for (i = 10 - 1; i >= 0; i--)
		printf("%5d", a[i]);
	printf("\n");
}
