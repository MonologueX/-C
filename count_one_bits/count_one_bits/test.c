#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int count_one_bit(int n)
{
	int count = 0;
	while (n)
	{
		n = n&(n - 1);
		count++;
	}
	return count;
}

int main()
{
	int n = 0;
	printf("请输入数字：");
	scanf("%d", &n);
	int count = count_one_bit(n);
	printf("%d 的二进制中 1 的个数为：%d\n", n, count);
	system("pause");
	return 0;
}