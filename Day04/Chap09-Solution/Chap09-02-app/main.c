#include <stdio.h>

int main(void) {
	int a = 100;
	double b = 300;
	char c = 12;

	printf("int형 변수 a의 주소 : %p\n", &a);
	printf("double형 변수 b의 주소 : %p\n", &b);
	printf("char형 변수 c의 주소 : %p\n", &c);

	return 0;
}