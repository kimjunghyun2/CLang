/*

2. 문자열 배열에 저장하고 출력하는 프로그램을 작성하시오

char aa[8] = "Basic-C";
int i;
출력화면은 2가지

문자열 매열 ss => Basic-C
거꾸로 출력 ss => C-cisaB
*/

#include<stdio.h>
int main() {
	char aa[8] = "Basic-C";
	int i;


	printf("문자열 배열 ss =>  ");
	for (i = 0; i < 8; i++) {
		printf("%c", aa[i]);
	}
	printf("\n");
	printf("거꾸로 출력 ss =>  ");
	for (i = 7; i >=0 ; i--) {
		printf("%c", aa[i]);
	}
	return 0;
}