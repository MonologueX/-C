#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

void judgment(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
	{
		printf("%d������ \n", year);
	}
	else
	{
		printf("%d�������� \n", year);
	}
}

int main()
{
	int year = 0;
	printf("������Ҫ�жϵ���ݣ�");
	scanf("%d", &year);
	judgment(year);
	system("pause");
	return 0;
}