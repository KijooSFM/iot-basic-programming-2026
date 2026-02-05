// 대소문자 변환 프로그램
// DON'T Worry, Be Happy~ --> don't worry, be happy~ => 바뀐문자가 7개
// A (65) -> a (97) = 32
// B (66) -> b (98) = 32
// Z (90) -> z (122) = 32 *모든 대 -> 소문자는 32만 더하면 끝. [아스키코드표]

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	char str[80];
	int i;
	int count = sizeof(str) / sizeof(str[0]);
	int pos;	// 문자열에서 \0값이 처음 나오는 위치 (배열인덱스)
	int num = 0;	// 대문자에서 소문자로 바뀐 갯수

	printf("문자열 입력: ");
	gets(str);

	for (i = 0; i < count; i++) {
		if (str[i] == '\0') {
			pos = i;
			break;
		}
	}
	printf("%d\n", pos);

	for (i = 0; i < pos; i++) {
		if (str[i] > 'A' && str[i] <= 'Z') {	//문자 한자가 A에서 Z사이에 있으면
			str[i] = str[i] + 32;	// 소문자 변환
			num++;
		}
	}

	printf("바뀐문장 : ");
	puts(str);

	printf("바뀐 문자 수 : %d\n", num);

	return 0;
}