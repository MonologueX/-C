#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
	char password[10] = { 0 };
	char arr[] = "123456";
	int i = 0;
	
	printf("\n\n\n");
	for (i = 0; i < 3; i++)
	{
		printf("\t\tÇëÊäÈëÃÜÂë:");
		scanf("%s", &password);
		if (strcmp(password, arr) == 0)
		{
			printf("\t\tÃÜÂëÕýÈ·£¬µÇÂ¼³É¹¦\n");
			break;
		}
		else
		{
			printf("\t\tÃÜÂë´íÎó,ÇëÖØÐÂÊäÈë\n\n");
		}
	}

	if (3 == i)
	{
		printf("\t\tµÇÂ½Ê§°Ü\n");
		exit(1);
	}

	system("pause");
	return 0;
}