#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char q = { 0 };
	int w = 0;//打印矩形的行
	int e = 0;//打印矩形的宽
	int n = 0;//设定打印矩形的大小
	scanf("%c%d", &q, &n);
	for (w = 0; w < n; w++)
	{
		for (e = 0; e < n; e++)
		{
			printf("%c", q);
		}
		printf("\n");
	}
	return 0;
}