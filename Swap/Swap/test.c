#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int x = 1;
	int y = 2;
	printf("交换前：x = %d,y = %d\n", x, y);
	swap(&x, &y);
	printf("交换后：x = %d,y = %d\n", x, y);
	system("pause");
	return 0;
}