#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

void print(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}

	if (n > 9)
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
	return;
}

int main()
{
	int a = 0;
	printf("请输入一个整数：");
	scanf("%d", &a);
	print(a);
	printf("\n");
	system("pause");
	return 0;
}