#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 
int main()
{
	int i, q;
	int a[10][10];
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
		for (q = 1; q <= i - 1; q++)
			a[i][q] = a[i - 1][q - 1] + a[i - 1][q];
	for (i = 0; i < 10; i++)
	{
		for (q = 0; q < 10 - i; q++)
			printf("  ");
		for (q = 0; q <= i; q++)
			printf("%3d ", a[i][q]);
		printf("\n");
	}
	return 0;
}
