//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#include <string.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i, a[4] = {0, 0, 0, 0};
//	char t;
//	for (i = 0;; i++)
//	{
//		scanf("%c", &t);
//		if (t == '\n')break;
//		else if (t >= 'A' && t <= 'Z') a[0]++;
//		else if (t >= 'a' && t <= 'z') a[0]++;
//		else if (t == ' ') a[1]++;
//		else if (t >= '0' && t <= '9') a[2]++;
//		else a[3]++;
//	}
//	//for (i = 0; i < 4; i++) printf("%d\t", a[i]);
//	printf("英文字母的个数为:%d\n", a[0]);
//	printf("空格的个数为:%d\n", a[1]);
//	printf("数字的个数为:%d\n", a[2]);
//	printf("其他字符的个数为:%d\n", a[3]);
//	system("pause");
//	return 0;
//}