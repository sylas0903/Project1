#include <stdio.h> 
#include <math.h>  // 수학 관련 헤더파일

struct Player
{
	int x;
	int y;
};

struct Monster
{
	int x;
	int y;
};

void ParameterArray(int array[])
{
	for (int i = 0; i < 5; i++)
	{
		array[i] = 10;
	}
}


int main()
{
	/*
	// void main cs int main
	// int main() 함수가 종료할 때 정수형 값을 리턴하겠다는 의미
	// 운영체제에게 프로그램의 종료 사유를 전달해주는 것이다

	// 0을 리턴하게 되면 프로그램이 정상적으로 실행을 마지고 종료하는 것으로 판단한다
	// 0 이외에 값을 리턴하게 되면 비정상적으로 종료되는 것으로 판단한다

	// void main() 함수가 종료할 때 아무 값도 리턴하지 않겠다는 의미
	*/

	// 두 점 사이의 거리
	/*
	// character와 dragon의 거리

	struct Player character = { 0,0 };
	struct Monster dragon = { 3,5 };

	--------------------------- 내꺼
	character.x - dragon.x;
	printf("x의 길이 : %lf\n", sqrt(pow(character.x - dragon.x,2)));
	character.y - dragon.y;
	printf("y의 길이 : %lf\n", sqrt(pow(character.y - dragon.y, 2)));

	printf("character와 dragon의 길이 ")
	---------------------------------

	--------풀이--------
	printf
	(
		"두 점 사이의 거리 : %lf",
		sqrt(pow(character.x - dragon.x, 2)) + (pow(character.y - dragon.y, 2))
	);

	// 루트

	int value = 49;
	printf("루트 100의 값 : %lf\n", sqrt(value));

	// 제곱
	int variable = 10;
	printf("variable의 제곱은 : %lf\n", pow(variable, 2));
	*/


	// Lvalue vs Rvalue
	/*
	// Lvalue
	// 표현식 이후에도 사라지지 않는 값이며, 이름을 지니고 있는 변수

	// Rvalue
	// 표현식 이후에 사라지는 값이며, 임시 변수이다

	// a,b <= Lvalue     // 10,20 <= Rvalue
	// Lvalue는 Rvalue로도 사용할 수 있다
	int a = 10;
	int b = 20;

	// a + b : 임시 변수
	int result = a + b;

	// Lvalue에 상수를 사용할 수 없다
	// 10 = a;
	// a + b = 10;

	printf("result의 변수의 값 : %d", result);

	// 전위 증감, 후위 증감
	// 전위 증감같은 경우에는 Lvalue랑 Rvalue로 사용할 수 있다
	// 후위 증감같은 경우에는 Rvalue로만 사용이 가능하다

	int x = 0;
	int y = 0;

	// 전위 증가
	// 전위 증가는 증가된 자기 자신(변수)을 반환한다
	++y;

	// 후위 증가
	// 후위 증가는 증가된 복사본을 반환한다
	x++;
	*/
	// 0, 를쓰면 , 다음이 전부 0 처리
	int room[5] = { 0, };

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", room[i]);
	}


	// room이라는 이름은 배열의 시작 주소를 의미한다
	ParameterArray(room);

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", room[i]);
	}





	return 0;
}



