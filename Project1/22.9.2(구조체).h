#include <stdio.h> // 라이브러리 헤더 파일을 가져올 때 사용
#include "Calculator.h" // " "사용자 정의 헤더 파일을 가져올때 사용 

// 메크로 
/*
// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정

// 매크로는 자료형이 없으므로 메모리 공간이 확보가되지 않는다
#define PI 3.14

// 매크로에서는 ;로 필요 x

// 매크로의 단점
// 문제가 생겼을 때 디버깅이 되지 않는다

// 매크로 함수도 자료형이 없으므로 메모리 공간이 확보되지 않는다
#define Solution(x,y) x * y //  a+1이 x값 b+1이 y값으로 들어감 1 + (1 * 2) + 1 = 4
*/
void main()
{
	// 전처리기
	/*
	// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정

	int result = Function(10, 20);
	printf("result 변수의 값 : %d\n", result);

	// 매크로 변수는 상수이고, 메모리 공간이 없기 때문에 값을 변경할 수 없다
	// PI = 3.45;

	int a = 1;
	int b = 2;

	printf("PI의 값 : %f\n", PI);
	printf("Solution 함수의 결과 : %d\n", Solution(10 , 20));
	printf("Solution 함수의 결과 : %d\n", Solution(a + 1, b + 1));
	*/

	// 조건부 컴파일
	/*
	// 조건에 따라 코드의 일정 부분을 컴파일의 여부를 결정할 수 있다
	// 조건부 컴파일은 #endif를 사용해서 끝내야 된다

#if IOS
	// PC에 알맞는 키 입력
	printf("안드로이드 기기입니다");
#elif ANDROID
	// 모바일에 알맞는 키 입력
	printf("두 번째 조건입니다");
#else
	printf("2개의 조건이 다 틀립니다");
#endif
	*/

	// 구조체
	/*
	// 여러 개의 변수를 하나의 집합으로	구조화한 다음 하나의 객체를 생성하는 것
	struct Character
	{
		int health;
		float weight;
		const char * name;
		// 구조체를 선언하기 전에 구조체는
		// 메모리 공간이 생성되지 않으므로
		// 구조체 내부에 있는 데이터를 초기화할 수 없다

	};
	struct Character yasuo;
	yasuo.health = 100;
	yasuo.name = "최후의 숨결";
	yasuo.weight = 80.5f;

	printf("yasuo의 체력 : %d\n", yasuo.health);
	printf("yasuo의 이름 : %s\n", yasuo.name);
	printf("yasuo의 몸무게 : %f\n", yasuo.weight);

	// 구조체에 초기화 리스트를 사용할 때는
	// 구조체 위에서 선언된 변수의 순서로 정의되어야 한다
	struct Character Zed = {50,80.5,"제드 너프해줘요"};
	printf("Zed의 체력 : %d\n", Zed.health);
	printf("Zed의 이름 : %s\n", Zed.name);
	printf("Zed의 몸무게 : %f\n", Zed.weight);
	*/

	// 과잉수
	/*
	// 자연수 중에서 자기 자신을 제외한 양의 약수를
	// 모두 더했을 때 자기 자신보다 더 커지는 수이다.

	int value;
	int result = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}
	if (value < result)
	{
		printf("과잉수");
	}
	else
	{
		printf("과잉수가 아니다");
	}
	*/
}

