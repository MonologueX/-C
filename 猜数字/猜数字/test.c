#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("\t\t==============��ӭ�������С��Ϸ==============\n");
	printf("\t\t\t=======��ѡ�����б�=======\n");
	printf("\t\t\t\t1.��ʼ��Ϸ\n");
	printf("\t\t\t\t0.�˳���Ϸ\n");
}

void game()
{
	int c = 0;
	int ret = 0;
	ret = rand() % 100;
	while (1)
	{
		printf("\t\t��������Ҫ�µ����֣�");
		scanf("%d", &c);
		if (c > ret)
		{
			printf("\t\t�´��ˣ����ٲ�һ��\n\n");
		}
		else if (c < ret)
		{
			printf("\t\t��С�ˣ����ٲ�һ��\n\n");
		}
		else
		{
			printf("\t\t��������¶���\n");
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
			printf("\t\tѡ���������ݲ˵���������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}