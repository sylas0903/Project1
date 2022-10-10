#include <stdio.h>
#include <stdlib.h>

void Function()
{
	printf("hello");
}

void main()
{
	// 이중 포인터 응용
	/*
	int a = 10;
	int b = 20;

	int* ptr1 = &a;
	int* ptr2 = &b;

	int** pptr1 = &ptr1;
	int** pptr2 = &ptr2;

	int* temp = *pptr1;
	*pptr1 = *pptr2;
	*pptr2 = temp;

	printf("a의 값 : %d, b의 값은 : %d\n", a, b);
	printf("ptr1이 가리키는 값 : %d, ptr2가 가리키는 값 : %d", *ptr1, *ptr2);
	*/

	// 댕글링 포인터
	/*
	// 이미 해제된 메모리를 가리키고 있는 포인터
	int* ptr = (int*)malloc(4);

	// malloc은 Heap에 메모리를 할당
	// stack의 포인터 변수로 Heap에 접근

	// a와 b로 선언한 변수들은 stack 메모리 영역에 저장
	int a = 10;
	int b = 10;

	*ptr = 10;

	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);

	// free를 하는순간 stack에서 가리키던 Heap의 메모리 공간이 없어진다
	free(ptr);
	// 동적 할당한 메모리를 해제할 때 포인터 변수를 NULL로 초기화한다
	ptr = NULL;

	// 해제한 메모리를 다시 할당하면 처음 생성한 위치에서 메모리가 생성
	ptr = (int*)malloc(4);

	*ptr = 20;

	printf("ptr이 가리키는 주소 : %p\n", ptr);
	printf("ptr이 가리키는 값 : %d\n", *ptr);
	*/

	// 함수 포인터
	// 함수의 주소값을 저장하고	가리킬 수 있는 변수

	// printf("Function함수의 주소 : %p\n", Function);
	// printf("Function함수의 주소 : %p\n", &Function);

	void (*fp) (void);

	// 함수 포인터는 함수의 반환형과 매개변수의 타입이 일치해야 하며,
	// 함수 포인터를 사용하여 동적으로 메모리를 할당할 수 없다
	fp = Function;

	fp();




}