#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char q = { 0 };
	int w = 0;//��ӡ���ε���
	int e = 0;//��ӡ���εĿ�
	int n = 0;//�趨��ӡ���εĴ�С
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