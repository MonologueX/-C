#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#include <process.h>

//初始化数组
void InitArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
}

//打印数组
void PrintfArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//逆置数组
void ReverseArr(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = arr[tmp];
		left++;
		right--;
	}
}

//销毁数组
void EmptyArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void TestArray()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("初始化数组：\n");
	InitArr(arr, sz);
	PrintfArr(arr, sz);
	printf("逆置数组：\n");
	ReverseArr(arr, sz);
	PrintfArr(arr, sz);
	printf("销毁数组：\n");
	EmptyArr(arr, sz);
	PrintfArr(arr, sz);
}

int main()
{
	TestArray();
	system("pause");
	return 0;
}