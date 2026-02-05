//	for 문

#include <stdio.h>

	int main() {
		int a = 1;
		int i;  // 반복문을 위한 변수

		/*
		 for (초기값; 조건식; 증감식) {
			 반복할 실행할 코드;
		 }
		*/

		for (i = 0; i < 5; i++) {
			a = a * 2;
		}
		printf("a : %d\n", a); // for문을 빠져나온 뒤 a 값 콘솔 출력

		// $를 10번 출력
		for (i = 0; i < 10; i++) {
			printf("$");	//	printf("$"), printf("%S", "$")
		}

		printf("\n"); // 줄바꿈

		// 이중 for문
		int j = 0;

		for (i = 0; i < 3; i++) {
			for (i = 0; i < 5; i++) {
				printf("%s", "*");
			}
			printf("\n");
		}

		return 0;
	}

