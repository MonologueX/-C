#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#define m 5

void prit(int a[m], int b[m])
{
	int i = 0;
	printf("数组a:");
	for (i = 0; i<m; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("数组b:");
	for (i = 0; i<m; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
}

void Test()
{
	int i = 0;
	int t = 0;
	int a[m] = { 0 };
	int b[m] = { 0 };
	printf("数组的大小为%d\n\n", m);
	printf("请输入数组a:");
	for (i = 0; i < m; i++)
		scanf("%d", &a[i]);
	printf("请输入数组b:");
	for (i = 0; i < m; i++)
		scanf("%d", &b[i]);
	printf("\n");
	printf("交换前:\n");
	prit(a, b);
	for (i = 0; i<m; i++)
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	printf("\n");
	printf("交换后:\n");
	prit(a, b);
	printf("\n");
}


int main()
{
	Test();
	system("pause");
	return 0;
}