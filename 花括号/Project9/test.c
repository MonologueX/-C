#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int ch, i = 0;
	ch = getchar();
	if (ch == '}')
		printf("�����Ų��ɶ�");

	while (ch != EOF)
	{
		if (ch == '{')
			i++;
		if (ch == '}')
			i--;
		ch = getchar();
	}

	{
		if (i == 0)
			printf("�����ųɶ�");
		else
			printf("�����Ų��ɶ�");

	}

	printf("\n");
	system("pause");
	return 0;
}