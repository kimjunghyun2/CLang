#include<stdio.h>
int main() {
	//char a = getchar(); // 한 문자를 입력 받아 a에 저장
	//putchar(a); // 한 문자를 인수로 받은 a 변수 내용을 출력 

	char input;
	char qw[20];
	while (1) {
		//getchar(); // 엔터방지
		printf("getchar 입력 >> ");
		input = getchar();
		if (input != EOF) {
			putchar(input);
			printf("\n");
		}else{
				break;
		}
		getchar(); // 엔터방지
		printf("gets_s입력 >> ");
		gets_s(qw,20);
		
		puts(qw);

	}
}