#include <stdio.h>


int main()
{
	// 상수에 대한 이해
	/*
	const int value = 10;
	
	printf("value 변수의 값 : %d", value);

	// value의 값은 const로 상수화되었으므로 바꿀 수 없다
	// value = 20;

	// 심볼릭 상수 : 메모리 공간을 가지고 있는 상수 ex) const int data;
	// 리터럴 상수 : 메모리 공간을 가지고 있지 않은 상수 ex) 10, "Count"
	*/

	// 포인터 상수
	int variable = 10;
	int variable2 = 20;

	// const가 자료형 * 앞에 들어가게 되면 포인터의 메모리 공간을 상수화한다
	int* const pointer = &variable;

	// pointer = &variable2;

	printf("pointer 변수가 가리키는 값 : %d", *pointer);

	*pointer = 30;

	return 0;
}


