#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	printf("请输入两个整数：");
	
	//0010 0010 1001 1001
	//0000 0111 1100 1111
	//7
	scanf("%d %d", &m, &n);
	for (i = 0; i < 32; i++)
	{
		if (((m>>=1)&1) != ((n>>=1)&1))
		{
			count++;    
		}
	}
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
