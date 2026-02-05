//	무한루프(infinite loop)란 종료 조건이 없거나, 종료 조건이 절대 참이 되지 않는 반복문을 의미합니다.

#include <stdio.h>

int main() {
	int i = 1;

	// while문으로 무한루프
	/*while (1) {
		printf("IF %d\n", i++);

	}*/

	//	for문으로 무한루프
	/*for (;;)
		print("IF %d\n", i++):
	}*/

	while (1) {
		printf("Be happy!\n");
		i++;
		if (i == 20) {	// 20번 반복 후 탈출
			break;
		}
	}

	//	continue 문, 특정상황에서 반복문을 일부 반복을 제외시킬 때 사용
	for (i = 1; i < 100; i++) {
		if (i % 3 == 0) {	// 3의 배수일 떄는 반복문 아래를 실행하지 않고 
			continue;
		}
		printf("%d\n", i);
	}
	printf("\n");

	return 0;
}
