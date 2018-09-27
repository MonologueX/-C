#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int print_num(unsigned value)
{
	int count = 0;
	int a[32] = { 0 };
	int i = 0;
	while (value)
	{
		a[i++] = value % 2;
		value /= 2;
		count++;
	}

	printf("奇数序列：\n");
	for (i = count; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");

	printf("偶数序列：\n");
	for (i = count - 1; i >= 0; i -= 2)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int main()
{
	int value = 0;
	printf("请输入一个数：");
	scanf("%d", &value);
	print_num(value);
	system("pause");
	return 0;
}