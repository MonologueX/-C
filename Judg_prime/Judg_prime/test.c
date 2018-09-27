#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

void judg_prime(int num)
{
	int n = 0;
	if (num <= 1)
		printf("%d不是素数\n", num);

	for (n = 2; n <= num - 1; n++)
	{
		if (num%n == 0)
		{
			printf("%d不是素数\n", num);
			return;
		}
		else
		{
			printf("%d是素数\n", num);
			return;
		}
	}

}

int main()
{
	int num = 0;
	printf("请输入要判断的数：");
	scanf("%d", &num);
	judg_prime(num);
	system("pause");
	return 0;
}