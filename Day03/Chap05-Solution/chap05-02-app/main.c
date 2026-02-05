//	switch~case ��
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {

	printf("switch~case 구문시작하기\n");

	int rank = 0, money = 0; // 랭크, 당첨금
	printf("순위를 입력하세요");
	scanf("%d", &rank);

	//switch(rank) {
	//	case 1: // 1등
	//		money = 1000; // 1000만원
	//		//break;	// switch 문 탈출 (빠져나가기) break 문은 필수 !!
	//	case 2:
	//		money = 500; // 500만원
	//		break;
	//	case 3:
	//		money = 200;
	//		break;
	//	case 4:
	//		money = 50;
	//		break;
	//	default: // if문의 else와 동일
	//		money = 10;
	//		break;
	//}
	
	// else if �������� �ٲٱ�

	if (rank == 1) {
		money = 1000;
	}
	else if (rank == 2) {
		money = 500;
	}
	else if (rank == 3) {
		money = 200;
	}
	else if (rank == 4) {
		money = 50;
	}
	else {
		money = 10;
	}



	printf("%d�� ��÷�� %d������ ��÷�Ǽ̽��ϴ�.\n", rank, money);

		return 0;
}