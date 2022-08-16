#include <stdio.h>

void main()
{
	// 부호가 없는 자료형
	unsigned char value; // 0 ~ 255
	unsigned short variable; // 0 ~ 65535

	printf("unsigned char의 값 : %d", value);

	// 실수를 저장하는 방법
	// float - 4 byte  32 bit
	// double - 8 byte 64 bit

	// 고정 소수점
	// 소수점을 사용하여 고정된 자릿수의 소수를 나타내는 방법
	// [1]  [15] [16]
	// 부호 지수 가수

	// 부동 소수점
	// 소수점의 위치를 고정하지 않고 그 위치를 나타내는 수를 따로 적는 것으로 유효숫자를
	// 나타내는 가수와 소수점의 위치를 풀이하는 지수로 나누어 표현하는 방법

	float pi = 9.625;
	double rotation = 1.25;

	printf("float 변수의 값: %f\n", pi);
	printf("double 변수의 값 : %.15lf", rotation);

	//조건문
	// if : 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 명령문
	if (10 > 5) // if문의 조건이 참이라면 if문 안 쪽에 {   } 부분이 실행된다
	{
		printf("if문의 조건문은 참입니다")
	}





}