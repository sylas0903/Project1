#include <stdio.h>
#include <time.h>

int Function(int count)
{
	if (count == 1)
	{
		return 1;
	}

	// 재귀 호출(count -1)

	Function(count - 1);

	printf("count 변수의 값 : %d\n", count);

}

int Factorial(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number* Factorial(number - 1);
	}
}

void main()
{
	// 삼항 연산자
	/*
	// 3개의 피연산자를 가지는 조건 연산자
	int x = 10;
	int y = 20;

	// (조건) ? (100) : (200)
	//            참     거짓
	int temp = x == y ? 100 : 200;

	printf("temp 변수의 값 : %d", temp);
	*/

	// 재귀 함수
	/*
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수

	Function(3);

	// 재귀 함수는 함수를 계속 호출하기 때문에
	// 스택 영역에 메모리가 계속 쌓이게 되므로 스택 오버플로우가 일어나게 된다

	// 재귀 함수를 사용하려면 특정한 시점에서 함수를 반환해주어야 한다
	*/

	// 팩토리얼
	// 함수를 생성해서 매개 변수에 n값을 넣는다
	// n에 값에 대한 팩토리얼을 구해주세요

	int select = 3;

	int result = Factorial(select);
	
	printf("result 변수의 값 : %d", result);




}