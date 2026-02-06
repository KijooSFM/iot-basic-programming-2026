// 포인터 사용이유

#include <stdio.h>

// 포인터를 사용한 swap 함수 선언
void swap(int* pa, int* pb);

int main(void) {
	int a = 10, b = 20;	// 변수의 주소를 공유해서 

	printf("원본 a, b = %d, %d\n", a, b);
	swap(&a, &b);
	printf("변경후 a, b = %d, %d\n", a, b);
	return 0;
}

// 포인터를 사용한 swap 함수 정의
void swap(int* pa, int* pb) {
	int temp;	// 교환을 위한 임시변수

	temp = *pa;	// temp = 10
	*pa = *pb;	// a = 20, b = 20
	*pb = temp;	// b =10
}
