#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>


#define GGI_BOTTOM_Y 7




int ggi;
void init();
void titleDraw();


int GetKeyDown()
{
	if (_kbhit() != 0)
	{
		return _getch();
	}
}

void init()
{
	system("mode con cols=100 lines=30 | title ���� ����");
}

void titleDraw()
{
	printf("\n\n\n\n");
	printf("                     ===================================================   \n");
	printf("                     #########      ########       ########   ##     ###   \n");
	printf("                     #        #   ##        ##    ##          ##  ###      \n");
	printf("                     #        #   ##        ##   ##           ####         \n");
	printf("                     #########    ##        ##   ##           ####         \n");
	printf("                     ## ##        ##        ##   ##           ##  ##       \n");
	printf("                     ##   ##      ##        ##    ##          ##    ##     \n");
	printf("                     ##      ##     ########       ########   ##      ##   \n");
	printf("                     ===================================================   \n");

}




void GotoXY(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


void Drawggi(int ggi)
{

	GotoXY(ggi, GGI_BOTTOM_Y);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 1);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 2);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 3);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 4);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 5);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 6);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 7);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 8);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 9);
	printf("�������������\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 10);
	printf("�������������\n");
};



int main()
{
	init();
	titleDraw();


	GotoXY(40, 15);
	printf("���ӽ���");
	GotoXY(37, 15);
	printf(">");


	/*
	int ggi = GGI_BOTTOM_Y;
	Drawggi(ggi);
	*/

	int player, com, result = 0;

	int value = 0;

	srand(time(NULL));
	while (1)
	{

		// printf("����(0), ����(1), ��(2)�� �����ϼ���");
		// scanf_s("%d", &player);
		com = rand() % 3;

		value = player - com;

		// �� = ����
		if (player == 0)
		{
			if (com == 0)
			{
				printf("���º�\n");
			}
			else
			{
				if (com == 1)
				{
					printf("�й�\n");
				}
				else
				{
					printf("�¸�\n");
				}
			}

		}

		// �� = ����
		if (player == 1)
		{
			if (com == 1)
			{
				printf("���º�\n");
			}
			else
			{
				if (com == 2)
				{
					printf("�й�\n");
				}
				else
				{
					printf("�¸�\n");
				}
			}

		}

		// �� = ��
		if (player == 2)
		{
			if (com == 2)
			{
				printf("���º�\n");
			}
			else
			{
				if (com == 1)
				{
					printf("�й�\n");
				}
				else
				{
					printf("�¸�\n");
				}
			}

		}




	}


	system("cls");
	system("pause");



	return 0;
}