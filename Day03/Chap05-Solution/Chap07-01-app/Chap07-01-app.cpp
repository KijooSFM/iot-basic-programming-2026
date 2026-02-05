//	함수

# include<stdio.h>

// C에만 거의 필수 ! (C최신 표준에서는 에러가 아님)
int sum(int x, int y);	// 함수선언, 내용이 없음

int main() {
	int a = 10, b = 20;	// 더할 두 정수
	int result = -1;	// 결과를 저장할 변수

	//	return이 있는 함수를 호출하면 반드시 lvalue(변수)가 있어야함
	sum(a, b);	// sum 함수 호출하라 F11로 디버깅
	result = sum(a, b);	// sum 함수에 a, b를 전달해서 더한 결과를 받음
	printf("result : %d\n", result);	// 결과 출력

	return 0;	// 프로그램 정상 종료
}

int sum(int x, int y) {	// 함수정의
	int temp;	// 계산 결과를 잠시 저장할 변수

	temp = x + y;	// 두 값을 더함
	return temp;	// 더한 결과를 호출한 곳으로 돌려줌
}


