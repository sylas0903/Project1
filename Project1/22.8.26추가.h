#pragma once
#include <stdio.h>

// 함수의 원형
// 호출할 함수를 컴파일러에게 미리 알려주는 과정
// 단일 패스 컴파일(o), 멀티 패스 컴파일

// 더하기 함수 (2개의 매개변수를 가진다)
// 2개 인수에 값을 넣어서 계산되는 결과값을 출력
// 함수(10,20) = 30

// 빼기 함수 (2개의 매개 변수를 가진다)
// 2개 인수에 값을 넣어서 계산되는 결과값을 출력
// 함수(5,5) = 0

// 곱셈 함수 (2개의 매개 변수를 가진다)
// 2개 인수에 값을 넣어서 계산되는 결과값을 출력
// 함수(5,5) = 25

// 나눗셈 함수 (2개의 매개 변수를 가진다)
// 2개 인수에 값을 넣어서 계산되는 결과값을 출력
// 함수(10,10) = 1

void Plus(int x, int y)
{
	printf("더하기 함수의 결과 : %d")
}






void Function(const char * name, void * value);

void Integer(int x)
{
	printf("Integer 함수의 x 값 : %d\n", x);
}

void Decimal(float x)
{
	printf("Decimal 함수의 x 값 : %f\n", x);
}

void Character(char x)
{
	printf("Character 함수의 x 값 : %c\n", x);
}

void main()
{
	// 범용(void) 포인터
	/*
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터
	int value = 10;

	void* ptr = &value;

	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없다
	// *ptr = 20; (x)
	*(int*)ptr = 20;

	printf("ptr이 가리키는 값 : %d\n", *(int*)ptr);

	// 범용 포인터로 변수의 메모리에 접근하려면 범용 포인터가 가리키는
	// 변수의 자료형으로 형 변환을 해주어야 한다

	float decimal = 10.5;
	ptr = &decimal;
	*(float*)ptr = 20.5;
	printf("ptr이 가리키는 값 : %f\n", *(float*)ptr);
	*/

	// 내가 함수에 입력하는 데이터(변수)가 출력되로록 하고 싶을 때
	// char(문자) int(정수) float(실수)
	// Integer(50);
	// Character('A');
	// Decimal(10.5);

	int A = 10;
	float B = 99.6;
	char C = 'R';

	Function("int", &A);
	Function("float", &B);
	Function("char", &C);
		
	

}

// char * name ===> [i]nt
// void * value ===> A의 시작 주소

void Function(const char* name, void* value)
{
	printf("%p\n", name); // name 변수의 시작주소
	printf("%s\n", name); // name 변수의 문자열 int == int

	// if문이 비교되는 원리는 %s로 구분한다
	if (name == "int")
	{
		printf("%d\n", *(int*) value);

	}
	else if (name == "float")
	{
		printf("%f\n", *(float*)value);
	}
	else if (name == "char")
	{
		printf("%c\n", *(const char*)value);
	}
}
