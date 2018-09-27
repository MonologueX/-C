#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>

int main()
{
	int amount = 100;
	int price = 0;
	printf("please write amount:");
	scanf("%d", &price);

	printf("please write the price of the ticket:");
	scanf("%d", &amount);

	int change = amount - price;
	printf("give you %d yuan\n", change);
	system("pause");
	return 0;
}