/*

단순 if문 연습
input=> 1입력하고 10하고 같으면 2를 더하고 10아니면 3을 더한다.
input= 4
input->10
input =12
*/
#include<stdio.h>
int main() {
	//준비 : 입력변수선언, 더하기변수선언
	int a, b;
	printf("input->");
	scanf_s("%d", &a);

	if (a == 10) {
		b = a + 2;
	}
	else{
		printf("%d", a + 3);
	}
	
}