#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int ch = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			printf(" %c\n", ch - 32);
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			printf(" %c\n", ch + 32);
		}
		else
		{
			;
		}
	}

	system("pause");
	return 0;
}