#pragma once
#include <stdio.h>

void main()
{
	// 구구단
	/*
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			printf("%d x %d = %d\n", i , j , i * j );
		}

		printf("\n");
	}
	*/

	// while 문
	/*
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문

	int memory = 5;

	while (memory > 1)
	{
		memory--;
		printf("조건이 참입니다.\n");
		break;
	}
	*/

	// do while 문
	/*
	// 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문

	int value = 5;

	do
	{
		printf("조건이 거짓입니다");
		while (value == 10);
	}
	*/

	// continue 문
	/*
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문

	for (int i = 0; i < 5; i++)
	{
		if (i % 3 == 0)
			continue;
		printf("%d ", i);
	}
	*/

	// 형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때
	// 기존에 지정했던 자료형을 다른 자료형으로 변환하는 과정 

	// C언어에서는 정수와 정수를 연산하게 되면 무조건 정수의 값만 가질 수 있다

	// 암묵적 형 변환
	/*
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정

	printf("char의 크기 : %d\n", sizeof(char));
	printf("short의 크기 : %d\n", sizeof(short));
	printf("int의 크기 : %d\n", sizeof(int));
	printf("float의 크기 : %d\n", sizeof(float));
	printf("long의 크기 : %d\n", sizeof(long));

	// int와long의 차이
	// int는 32비트 운영체제와 64비트 운영체제에서도 4 byte의 크기를 가진다
	// long은 32비트 운영체제에서는 4 byte이고 64비트 운영체제에서는 8 byte의 크기를 가진다

	// 단, 윈도우즈 64비트 운영체제에서는 4 byte 이다


	char x = 10;
	short y = 20;

	//  30  =  4 byte(int) + 4 byte(int)
	int sum = x + y;

	int z = 500; // 4 byte
	char temp = z; // 1 byte

	printf("temp의 값 : %d\n", temp);

	// 명시적 형 변환
	int p0 = 10;
	int p1 = 3;

	float result = (float)p0 / p1;
	printf("result의 값 : %f\n", result);
	*/


}