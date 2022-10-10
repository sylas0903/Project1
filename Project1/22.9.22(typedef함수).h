#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Typedef
/*
// 이미 사용되는 자료형을 다른 새로운 자료형으로 재정의할 수 있도록 해주는 키워드
typedef int INT32; // int == INT32


typedef struct _Player
{
	int x;
	int y;
	char name[20];
	const char* shape;

}Player;
*/


int main()
{
	// typedef
	/*
	int a = 10;
	INT32 b = 20;

	printf("a의 값 : %d\n", a);
	printf("b의 값 : %d\n", b);

	Player player;

	char nickname1[] = { "jason" };

	strcpy(player.name, "jason");

	printf("player의 이름 : %s", player.name);
	*/

	// 합
	/*
	// 입력값 n이 주어졌을때, 1부터 n까지의 합을 구하는 프로그램

	int a = 0; // 입력한 n 변수
	int result = 0; // 누적해서 값을 출력하는 변수

	printf("n을 입력해 주세요");

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	printf("result의 값: %d", result);
	*/

	// c 언어 게임 개발론
	/*
	// 첫 번째
	// 인터넷에 많은 자료를 검색해서 자기가 원하는 코드를 보고 그걸 응용해서 개발해야한다

	// 두 번째
	// 어느정도 구상을 해주어야한다
	// 1. 컨셉
	// 2. 컨셉에 맞는 기술들을 깊이있게 습득
	*/

	// 역순으로 별 찍기

	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5 - i; j++)
		{
			printf("  ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("☆");
		}

		printf("\n");
	}








	return 0;
}

