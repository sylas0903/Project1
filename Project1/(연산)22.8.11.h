#pragma once
#include <stdio.h>
/
void main()
{
	// 컴퓨터는 0 또는 1이라는 숫자로만 이해
	// 십진법 <- 사람이 사용하는 숫자 체계 ( 0 ~ 9 )
	// 이진법 <- 컴퓨터가 사용하는 숫자 체계 ( 0 ~ 1 )

	// 컴파일
	// 사람이 이해하는 언어를 컴퓨터가 이해할 수 있는 언어로 바꾸는 과정
	// 비트 (데이터를 저장하기 위한 최소의 단위)
	// 1비트 [] [] [] [] [] [] [] [] 비트가 8개 모이게 되면 1 바이트
	// 바이트 : 한 문자를 나타내기 위한 최소의 단위

	// 10진수를 2진수로 바꾸는 과정
	// 2진수를 10진수 바꾸는 과정
	// 15 [00001111]
	// [0] [0] [0] [0] [1] [1] [1] [1]
	// 2^7 2^6 2^5 2^4 2^3 2^2 2^1 2^0
	// 128  64  32  16  8   4   2   1
	//  0 +  0 +  0 +  0 +  8 +  4 +  2 +  1 = 15

	// int   4byte
	// char  1byte  [0] [0] [0] [0] [1] [1] [1] [1]
	// float 4byte

	// 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자

	// AND : 두 개의 비트가 모두 1일 때 1을 반환하는 연산자
	int X = 7; // 0000 0111
	int Y = 9; // 0000 1001
			   // 0000 0001 -> 1
			   // 0000 1111 -> 15

	printf("X와 Y의 AND를 연산한 결 : %d\n", X & Y);

	printf("X와 Y의 OR을 연산한 결과 : %d\n", X | Y);

	printf("X와 Y의 XOR을 연산한 결과 : %d\n", X ^ Y);

	printf("X의 NOT을 연산한 결과 : %d\n", ~X);

	// OR  : 두 개의 비트중 하나라도 1이 있다면 1을 반환하는 연산자
	// XOR : 두 개의 비트가 모두 같다면 0을 반환하고 서로 다르면 1을 반환하면 연산자
	// NOT : 하나의 비트를 반전한다 1 -> 0, 0 -> 1

	// 비트 중에 가장 왼쪽에 있는 비트는 부호 비트
	// [ 0 ] [  ] [  ] [  ] [  ] [  ] [  ] [  ] 양수
	// [ 1 ] [  ] [  ] [  ] [  ] [  ] [  ] [  ] 음수
	// 0 : 양수를 나타내고, 1 : 음수를 나타낸다

	// 오버플로우
	// 특정한 자료형이 표현할 수 있는 최소값의 범위를 넘어서 연산을 수행하는 과정
	// 최대값보다 더 많은 값을 저장하게 되면 최솟값부터 최댓값을 넘어간 만큼 다시 계산
	char vlaue = 130; // -128 ~ -127
	printf("value의 값 : %d\n", vlaue);

	//  1   1   1   1   1   1   1
	// [0] [1] [1] [1] [1] [1] [1] [1] = 127
	//                            +[1]
	//----------------------------------
	//  1   0   0   0   0   0   0   0  = -128

	// 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정
	char variable = -129;
	printf("variable의 값 : %d", variable);
}
/*#pragma once
