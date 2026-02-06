//	포인터 계속

#include <stdio.h>

// &(ampersand 또는 의미and), *(Asterik 또는 star)
int main(void) {
	int a = 10, b = 15, total;	// 변수 선언 및 초기화 a, b만
	double avg; // 평균

	// 포인터변수
	int* pa, * pb; // a, b를 가리키는 포인터변수 선언
	int* pt = &total; // int* 선언, pt = &total; 이 합쳐진것. 선언과 동시에 초기화
	double* pg = &avg;	// 선언과 동시에 초기화


	pa = &a;
	
	pb = &b;	// &a = &b; a의 주소를 b의 주소로 바꾸는 건 불가능함.

	// 원래는 total =a + b; avg = total / 2.0;
	// 대신 포인터변수로 위의 작업을 대체
	//	*pa -> a변수의 주소가 가지고 있는 값
	// pa -> a변수의 주소

	*pt = *pa + *pb; // total = a + b 와 동일
	*pg = *pt / 2.0; // avg = total / 2.0 와 동일

	// 결과 출력
	printf("a = %d, b = %d, total = %d, avg = %.2f\n", a, b,total, avg);
	printf("*pa = %d, *pb = %d, *pt = %d, *pg = %.2f\n", *pa, *pb, *pt, *pg);

	return 0;
}
