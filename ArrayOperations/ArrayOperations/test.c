#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#include <process.h>

//��ʼ������
void InitArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = i + 1;
	}
}

//��ӡ����
void PrintfArr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//��������
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

//��������
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
	printf("��ʼ�����飺\n");
	InitArr(arr, sz);
	PrintfArr(arr, sz);
	printf("�������飺\n");
	ReverseArr(arr, sz);
	PrintfArr(arr, sz);
	printf("�������飺\n");
	EmptyArr(arr, sz);
	PrintfArr(arr, sz);
}

int main()
{
	TestArray();
	system("pause");
	return 0;
}