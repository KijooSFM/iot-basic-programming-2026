#define _CRT_SECURE_NO_WARNINGS

// 문자열과 포인터

#include <stdio.h>
#include <string.h>

int main(void) {
	//	문자열 출력
	printf("%s\n", "apple");

	//	문자열 주소확인
	printf("%p\n", (void*)"apple");
	printf("%p\n", (void*)"apple");
	printf("두번째 문자 주소 %p\n", (void*)("apple" + 1));
	printf("두번째 문자 %c\n", *("apple" + 1));
	printf("첫번째 문자 %c\n", *("apple"));
	printf("다섯번째 문자 %c\n", "apple"[4]);

	char fruit[7] = "apple";

	printf("%p\n", (void*)fruit);

	printf("두번째 문자 주소 %p\n", (void*)(fruit + 1));
	printf("두번째 문자 %c\n", *(fruit + 1));
	printf("첫번째 문자 %c\n", *fruit);
	printf("다섯번째 문자 %c\n", fruit[4]);

	// fruit = "banana";	// 문자 배열의 값을 변경할 수 없음
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

	char* dessert = "apple";
	dessert = "banana";
	printf("%s\n", dessert);

	return 0;
}
