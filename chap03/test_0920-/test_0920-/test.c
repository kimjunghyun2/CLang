/*
* *****
* *****
* *****
* *****
* *****
* 
* 
* 

1.	준비 : 1씩 증가변수 선언, 반복문(for)
	입력 :
	처리 : 반복문 안에 실행문 삽입
	출력 : 처리하여 출력




*/

#include <stdio.h>
int main() {
	int a;
	int b;
	for (int i = 0; i < 5; i++) {
		printf("*****\n");
	}
	printf("--------------\n");
	for (int i = 0; i < 10; i++) {
		printf("*****\n");
	}
	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (a = 0; a <= i; a++) {
			printf("*");
		}
	}
	printf("--------------\n");
	for (int i = 0; i < 5; i++) {
		printf("\n");
		for (a = i; a <= 4; a++) {
			printf(" "); // 초기값 이 n+1번째줄이므로 0이면 4번 4면 안채우면 보면된다
		}
		for (b = 0; b <= (2 * i); b++) {
			printf("*");
			//0일때도 한번은 말이 되니까 별이 찍힘
		}
	}
	return 0;
}