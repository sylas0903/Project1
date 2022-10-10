#include <stdio.h>

struct Object
{
	// 구조체는 선언만 해놓은 상태는 메모리가 생성되지 않습니다	
	short size; // 2 byte
	int height; // 4 byte
	double position; // 8 byte
};

struct Data
{
	int x; // 4 byte
	int y; // 4 byte
};

struct Data
{
	int x;
	int y;
};

struct Shape
{
	char name[10];
	double size;
};

struct Animal
{
	int leg;
	const char* name;
};


int main()
{
	// 바이트 패딩
	/*
	// 구조체의 경우 정의해주어야 멤버 변수의 메모리가 생기므로
	// 멤버 변수의 데이터를 초기화할 수 있습니다
	struct Object character = { 10,300,3.5f };
	struct Data data = { 10,10 };
	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의 크기가
	// 다르게 설정될 수 있으며, 구조체의 크기를 결정하는 형태는
	// 기본 자료형으로만 구성된다
	struct Monster dragon = { 100,30.5f,10 };


	printf("Data 구조체의 크기 : %d\n", sizeof(data));
	printf("Object 구조체의 크기 : %d\n", sizeof(character));
	printf("dragon 구조체의 크기 : %d\n", sizeof());

	// 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩 해주는 최적화 작업

	// align 규칙
	// CPU가 데이터를 읽을 때
	// 홀수 (x) 3 byte, 5 byte / 짝수 (o) 2 byte 4 byte 8 byte
	// 32bit OS에서는 4 byte씩 메모리를 읽고, 64bit OS에서는 8 byte씩 메모리를 읽습니다

	// 구조체의 크기는 구조체를 구성하는 멤버 중에
	// 크기가 가장 큰 자료형의 배수가 되도록 정렬합니다
	*/

	// 구조체 포인터
	// 구조체를 가리키는 포인터

	// 구조체 포인터 선언
	struct Animal* pointer;

	struct Animal cat;
	printf("구조체 cat의 주소 : %d\n", &cat);

	return 0;
}

