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
	system("mode con cols=100 lines=30 | title ฐิภำ มฆธ๑");
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
	printf("กเกเกแกแกเกแกแกเกเกเกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 1);
	printf("กเกเกแกแกเกแกแกเกเกเกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 2);
	printf("กเกเกแกแกเกแกแกเกเกเกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 3);
	printf("กเกเกแกแกเกแกแกเกเกเกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 4);
	printf("กเกเกแกแกเกแกแกแกแกเกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 5);
	printf("กเกแกแกแกแกแกแกแกแกแกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 6);
	printf("กเกแกแกแกแกแกแกแกแกแกแกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 7);
	printf("กเกแกแกแกแกแกแกแกแกแกแกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 8);
	printf("กเกแกแกแกแกแกแกแกแกแกแกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 9);
	printf("กเกเกแกแกแกแกแกแกแกแกเกเ\n");
	GotoXY(ggi, GGI_BOTTOM_Y + 10);
	printf("กเกเกเกแกแกแกแกแกแกเกเกเ\n");
};



int main()
{
	init();
	titleDraw();


	GotoXY(40, 15);
	printf("ฐิภำฝรภ?");
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

		// printf("ฐกภง(0), นูภง(1), บธ(2)ธฆ ผฑลรวฯผผฟไ");
		// scanf_s("%d", &player);
		com = rand() % 3;

		value = player - com;

		// ณช = ฐกภง
		if (player == 0)
		{
			if (com == 0)
			{
				printf("นซฝยบฮ\n");
			}
			else
			{
				if (com == 1)
				{
					printf("ฦะน่\n");
				}
				else
				{
					printf("ฝยธฎ\n");
				}
			}

		}

		// ณช = นูภง
		if (player == 1)
		{
			if (com == 1)
			{
				printf("นซฝยบฮ\n");
			}
			else
			{
				if (com == 2)
				{
					printf("ฦะน่\n");
				}
				else
				{
					printf("ฝยธฎ\n");
				}
			}

		}

		// ณช = บธ
		if (player == 2)
		{
			if (com == 2)
			{
				printf("นซฝยบฮ\n");
			}
			else
			{
				if (com == 1)
				{
					printf("ฦะน่\n");
				}
				else
				{
					printf("ฝยธฎ\n");
				}
			}

		}




	}


	system("cls");
	system("pause");



	return 0;
}