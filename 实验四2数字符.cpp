#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i, a[4] = {0, 0, 0, 0};
	char t;
	for (i = 0;; i++)
	{
		scanf("%c", &t);
		if (t == '\n')break;
		else if (t >= 'A' && t <= 'Z') a[0]++;
		else if (t >= 'a' && t <= 'z') a[0]++;
		else if (t == ' ') a[1]++;
		else if (t >= '0' && t <= '9') a[2]++;
		else a[3]++;
	}
	//for (i = 0; i < 4; i++) printf("%d\t", a[i]);
	printf("Ӣ����ĸ�ĸ���Ϊ:%d\n", a[0]);
	printf("�ո�ĸ���Ϊ:%d\n", a[1]);
	printf("���ֵĸ���Ϊ:%d\n", a[2]);
	printf("�����ַ��ĸ���Ϊ:%d\n", a[3]);
	system("pause");
	return 0;
}