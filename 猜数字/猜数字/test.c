#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("\t\t==============欢迎玩猜数字小游戏==============\n");
	printf("\t\t\t=======请选择功能列表=======\n");
	printf("\t\t\t\t1.开始游戏\n");
	printf("\t\t\t\t0.退出游戏\n");
}

void game()
{
	int c = 0;
	int ret = 0;
	ret = rand() % 100;
	while (1)
	{
		printf("\t\t请输入你要猜的数字：");
		scanf("%d", &c);
		if (c > ret)
		{
			printf("\t\t猜大了，请再猜一次\n\n");
		}
		else if (c < ret)
		{
			printf("\t\t猜小了，请再猜一次\n\n");
		}
		else
		{
			printf("\t\t你真棒，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("\t\t选择错误，请根据菜单输入数字\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}