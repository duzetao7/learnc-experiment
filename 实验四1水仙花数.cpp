#define _CRT_SECURE_NO_WARNINGS//��ν"ˮ�ɻ���"��ָһ����λ�������λ���ֵ������͵��ڸ����������磺153��һ��ˮ�ɻ�������Ϊ153=13+53+33��
#include <stdio.h>

int main()
{
	int i;
	printf("0��1000��ˮ�ɻ����ǣ�\n");
	for (i = 2; i < 1000; i++)
	{
		int num_0 = i % 10;
		int num_1 = i / 10 % 10;
		int num_2 = i / 10 / 10 % 10;
		if (i == num_0 ^ 3 + num_1 ^ 3 + num_2 ^ 3)
			printf("%");
		if (i == num_0 * num_0 * num_0 + num_1 * num_1 * num_1+ num_2 * num_2 * num_2)
		{
			printf("%d\t", i);
		}

	}
	return 0;
}