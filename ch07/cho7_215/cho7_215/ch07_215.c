#include<stdio.h>
//함수원형선언
int squre(int num);
int Divide(int di1, int di2,int *besult);

int main() {
	int result, input;
	

	printf("제곱을 계산하고자 하는 값을 입력하시오 >> ");
	scanf_s("%d", &input);
	if ((result = squre(input)) < 0) {
		printf("입력값이 처리 할 수 있는 범위를 넘었습니다. ");
	}
	else {
		printf("%d 제곱은 %d 입니다 \n", input, result);

	}
	int a, b, besult;
	printf("2개의 숫자를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);
	if (Divide(a, b, &besult)) {
		printf("%d 나누기 %d는 %d 입니다. \n", a, b, besult);
	}
	else {
		printf(" 나누기 불가\n");
	}
}
int squre(int num) {
	if (num > 46340 || num < -46340) {
		return -1;
	}
	else {
		return num * num;
	}
}int Divide(int di1, int di2,int *besult) {
	//int besult;
	if (di2 == 0) {
		return 0;
	}
	else {
		*besult = di1 / di2;
		return 1;
	}
	
}