#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int binary_search(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	printf("\n\n\t\t������Ҫ���ҵ�����:");
	scanf("%d", &key);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);

	if (ret == -1)
	{
		printf("\t\t�Ҳ���������\n");
	}
	else
	{
		printf("\t\t�ҵ��ˣ�������ֵ��±���%d\n", ret);
	}

	system("pause");
	return 0;
}