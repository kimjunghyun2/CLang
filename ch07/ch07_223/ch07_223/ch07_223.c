#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);

int main(void) {
	int result;
	int (*calc)(int, int);

	calc = add;
	result = calc(20, 10);					//add 함수의 포인터 얻기
	printf("Calc result : %d\n", result);	//함수의 포인터로 함수 호출

	calc = sub;								//sub 함수의 포인터 얻기
	result = calc(20, 10);					//함수의 포인터로 함수 호출
	printf("Calc result: %d\n", result);	// 함수는 & 없이 함수명만 지정해도 주소가 저장됨

	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}