#include<stdio.h>

int main() {
//포인터 변수선언 : *기호 
	int* a;
	float* b;
	char* c;
	void* d;
	int ans;

//포인터 선언하면서 초기화
	int a1 = 10;
	int* p1 = &a1;

	int a2 = 20;
	int* p2;
	p2 = &a2;

	int a3 = 30;
	int* p3 = NULL;
	p3 = &a3;

	// 포인터변수로 입력 출력하기
	int a4 = 0; // 입력일반변수선언하면서 초기값 0 대입
	int* p4 = &a4;//a4의 주소명은 p4?

	scanf_s("%d", p4); // p4가곧 a4의 주소이므로
	printf("p4변수가 가르키는 메모리 주소안에 데이터 값은 %d입니다.\n",*p4 );// *p4 == a4
	printf("p4변수가 가르키는 메모리 주소안에 데이터 값은 %d입니다.\n", a4); // a4 안에 담긴 데이터값은 p4가 가르키는 주소 안의 데이터값과 동일

	printf("p4변수가 가르키는 메모리 주소안에 데이터 값은 %p입니다.\n", p4);   // p4 == &a4
	printf("p4변수가 가르키는 메모리 주소안에 데이터 값은 %p입니다.\n", &a4); // p4 안에 담긴 데이터 값은 a4의 주소명 과 같다?
																			// p4에 담긴 데이터값은 주소명이 a4에 담긴 데이터 값과 같다? a4의 주소명은 p4다?

	int aa = 0;
	int* pp = &aa;
	printf("값을 입력하시오:");
	scanf_s("%d", pp);
	printf("pp변수가 가르키는 메모리 주소안에 데이터 값은 %d입니다.\n", *pp);
	printf("pp변수의 값은 %p입니다.\n", pp);
	printf("aa변수의 값은%d입니다.\n", aa);
	/*
	값을 입력하시오 : 100
p4변수가 가리키는 메모리의 값은 100 입니다.
p4변수의 값은 9960276 입니다.
a4변수의 값은 100 입니다

	*/

}