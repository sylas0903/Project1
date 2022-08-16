#include <stdio.h>
void main()
{	
	// 사분면
	/*
	// 제 1 사분면 (+x,+y)
	// 제 2 사분면 (-x,+y)
	// 제 3 사분면 (-x,-y)
	// 제 4 사분면 (+x,-y)
	// y 절편 : (x[0], y)
	// x 절편 : (x, y[0])
	// 원점 : (x[0], y[0])
	
	int x = 0;
	int y = 0;

	if (x > 0 && y > 0)
	{
		printf("제 1 사분면 입니다.");
	}
	else if (x < 0 && y > 0)
	{
		printf("제 2 사분면 입니다.");
	}
	else if (x < 0 && y < 0)
	{
		printf("제 3 사분면 입니다.");
	}
	else if (x > 0 && y < 0)
	{
		printf("제 4 사분면 입니다.");
	}
	else if (x != 0 && y == 0)
	{
		printf("x 절편");
	}
	else if (x == 0 && y != 0)
	{
		printf("y 절편");
	}
	else if (x == 0 && y == 0)
	{
		printf("원점");
	}
	
	
	
	
	
	
	
	// != -> 같지않다
	
	// 논리 연산자
	// 1 = 참
	// 0 = 거짓
	
	// && (AND) : 두 개의 조건 모두 참이라면 조건을 실행
	// || (OR) : 두 개의 조건에 하나라도 참이면 조건을 실행

	/*
	if (x == 10 && y == 20)
	{
		printf("논리 연산 AND가 참입니다.\n");

		if (5 < 10)
		{
			printf("if문 안에 있는 조건문입니다.\n");
		}


	}

	if (x == 10 || y == 25)
	{
		printf("논리 연산자 OR이 참입니다.\n ");
	}
	*/

	// switch 문
	/*
	// 어떤 결과에 따라 그 결과부터 실행되는 조건문

	// break 문
	// 특정한 시점에서 분기를 탈출하는 제어문

	// default
	// case에 없는 값이 들어올경우 default로 빠짐

	int value = 5;
	switch (value)
	{
        case 0: printf("0 입니다\n");
			break;
		
		case 1: printf("1 입니다\n");
			break;
		default: printf("잘못 선택했습니다.\n");
	}
	
	
	// 대학 성적표
	// A는 100 ~ 90 점
	// B는 90 ~ 80 점
	// C는 80 ~ 70 점
	// D는 70 ~ 60 점
	// E는 60 ~ 50 점
	// 과락입니다.

	char alphabet = 'D';

	switch (alphabet)
	{
	case 'A': printf("100 ~ 90점 입니다");
		break;
	case 'B': printf("90 ~ 80점 입니다");
		break;
	case 'C': printf("80 ~ 70점 입니다");
		break;
	case 'D': printf("70 ~ 60점 입니다");
		break;
	case 'E': printf("60 ~ 50점 입니다");
		break;
	default: printf("과락입니다");
	}
	

    float variabel = 3.25;
	
	switch (variable)
	{
	  case 3.25: printf("부동 소수점의 오차로 인해 switch의 조건을 사용할 수 없습니다.")
	}
	*/





}