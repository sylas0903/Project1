#include <stdio.h>


void CallByValue(int x)
{
	x = 100;
	printf("함수 내부의 값 : %d\n", x);
}

void CallByReference(int* x)
{
	*x = 100;
}


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
	/*
	int variable = 10;
	int variable2 = 20;

	// const가 자료형 * 앞에 들어가게 되면 포인터의 메모리 공간을 상수화한다
	int* const pointer = &variable;

	// pointer = &variable2;

	printf("pointer 변수가 가리키는 값 : %d", *pointer);

	// pointer : 포인터 변수자체(메모리 주소를 저장한 값이 출력)
	// *pointer : 포인터가 가리키는 메모리 공간의 값을 출력

	*pointer = 30;
	variable = 50;
	*/

	// 상수 지시 포인터
	/*
	int data = 10;
	int data2 = 20;

	const int* pointer = &data;

	pointer = &data2;

	// 상수 지시 포인터는 가리키는 포인터 변수를 상수화하는 것이고,
	// 가리키고 있는 메모리는 상수화를 시키는것이 아니다
	data2 = 30;

	// *pointer = 1000;

	// string -> [H][e][l][l][o][\0]
	// OS read only Data 영역을 접근할 수 없도록 설정했기 때문
	const char* string = "Hello";

	// *string = 'A'
	string = "LOL";
	*/

	// scanf 함수 변수 입력
	/*

	int value = 0;
	int value2 = 0;

	// 정수값을 입력받으려면 %d 라는 서식 지정자를 사용해야한다
	 scanf_s("value:%d,value2:%d",&value, &value2); // call by Reference 하게 되면 <- 내부에서만 값이 변화
	 printf("value의 값 : %d, value2의 값 : %d", value, value2);
	 */

	 // scanf 함수 배열 입력
	 /*
	 char name[10];

	 // 배열의 크기는 컴파일 시점에 크기가 정해진다
	 // 배열의 크기를 명시적으로 scanf_s()함수에게 알려주어야한다
	 scanf_s("%s", name, sizeof(name));

	 printf("%s", name);
	 */

	 // 값에 의한 전달과 참조에 의한 전달
	 /*
	 printf("value 변수의 값 : %d\n", value); // call by Reference로 하게 되면 함수가 종료되더라도 변화된 값으로 그대로 적용

	 CallByValue(value);
	 printf("value 변수의 값 : %d\n", value);


	 CallByReference(&value);

	 printf("value 변수의 값 : %d\n", value);
	 */

	 // 오븐 시계
	 /*

	 int hour;
	 int minute;
	 int plus;

	 printf("현재 시간을 입력해주세요\n");
	 scanf_s("%d%d%d", &hour, &minute, &plus);


	 if (hour >= 0 && hour <= 23 && minute + plus >= 0 && minute + plus <= 59)
	 {
		 printf("요리 완성 시간은 %d시 %d분 입니다", hour, minute + plus);
	 }
	 else if (hour + ((minute + plus) / 60) == 24)
	 {
		 printf("요리 완성 시간은 0시 %d분 입니다", minute + plus - 60);
	 }
	 else if ((minute + plus) % 60 == 0)
	 {
		 printf("요리 완성 시간은 %d시 0분 입니다", hour + ((minute + plus) / 60));
	 }
	 else if (minute + plus > 59)
	 {
		 (minute + plus) / 60;
		 hour + ((minute + plus) / 60);

		 printf("요리 완성 시간은 %d시 %d분 입니다", hour + ((minute + plus) / 60), (minute + plus) / 60);
	 };
	 */

	 




		return 0;
}



