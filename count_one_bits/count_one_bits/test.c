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
	printf("���������֣�");
	scanf("%d", &n);
	int count = count_one_bit(n);
	printf("%d �Ķ������� 1 �ĸ���Ϊ��%d\n", n, count);
	system("pause");
	return 0;
}