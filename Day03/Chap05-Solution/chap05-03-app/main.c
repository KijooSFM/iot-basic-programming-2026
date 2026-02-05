	// 반복문

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

/*
* while 문
* while (조건식) {	// 조건식이 참인 동안
*	실행문	// 반복
* }
*/
	int a = 1; // 초기화 중요 !

	while (a < 10) {
		a *= 2;  // a = a * 2;
	}
	printf("a : %d\n", a);

	a = 0;

	while (a < 50) {
		printf("%5d", a++);
	}
	printf("\n");

	while (a > 0) {
		printf("while 실행!\n");	// 출력안됨
		a--;
	}
	printf("while 문 종료\n")	// 얘만 출력됨

	/*
	* do~while 문 : 반복문 내의 실행문을 무조건 한번 실행하고 반복하고자 할 때
	* do {
	*     반복할 실행문
	* } while (참인 조건);	조건괄호 뒤 ; 필수 !!
	*/
	a = 1;

	do {
		a *= 2;
	} while (a < 10);
	printf("a : %d\n", a);

	a == 0;

	return 0;
}