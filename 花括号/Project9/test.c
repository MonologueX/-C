#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int ch, i = 0;
	ch = getchar();
	if (ch == '}')
		printf("花括号不成对");

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
			printf("花括号成对");
		else
			printf("花括号不成对");

	}

	printf("\n");
	system("pause");
	return 0;
}