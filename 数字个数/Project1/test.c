#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <windows.h>

#define n 9
#define m 100

int main()
{
	int i = 0, count = 0;
	for (i = 0; i <= m; i++)
	{
		if (i / 10 == n)
			count++;
		if (i % 10 == n)
			count++;
	}
	printf("��1��%d������%d�ĸ���Ϊ��%d\n", m,n,count);
	system("pause");
	return 0;
}
