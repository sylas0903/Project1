#include <stdio.h>

void main()
{
	
	// 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로	수행하는 명령문

	
	// 증감 연산자
	/*
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자

	// 전위 (증가 감소) 문자 앞에 ++ or --
	// 변수의 값을 증감시킨 후에 연산을 수행

	int value = 0;

	int result = ++value;
	
	printf("value 변수의 전위 증가한 값 : %d\n", result);




	// 후위 (증가,감소) 문자 뒤에 ++ or --
	// 연산을 수행한 후에 변수의 값을 증가시킨다

	result = value++;
	printf("value 변수의 후위 증가한 값 : %d\n", result);
	printf("value의 결과 : %d", result);
	*/

	// for 문
	/*
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 횟수만큼 반복하는 반복문

	// 1. 초기식 (i = 0)
	// 2. 조건식 (i가 5보다 작을 때)
	// 3. 실행하고 싶은 명령문
	// 4. 증감식


	for (int i = 0; i < 10; i++)
	{
		printf("안녕하세요!?\n");
	}
	
	
	// for문을 이용해서 순차적으로 증가하는 초기식의 값을 출력
	// 1 ~ 5 ,5 ~ 1

	for (int a = 5; a > 0; a--)
	{
		printf("%d\n", a);
		

	// 약수
	// 어떤 수를 나누어 떨어지게하는 수

	int value = 6;
	for (int b = 1; b <= value; b++)
	{
		if (value % b == 0)
		{
			printf("%d ", b);
		}

	}
	*/

	// 이중 for 문
	/*
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("안녕하세요\n");
		}
	}
	*/

	for (int i = 0; i < 3; i++)
	{
		printf("주황색\n");
		for (int j = 0; j < 3; j++)
		{
			printf("검은색\n");
		}
	}
}