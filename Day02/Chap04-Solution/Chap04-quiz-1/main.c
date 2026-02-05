#include <stdio.h>

int main(void) {
	int res;  // 결과 저장변수

	res = (sizeof(short) < sizeof(long));

	printf("%s", (res == 1) ? "long" : "short");

	return 0;
}