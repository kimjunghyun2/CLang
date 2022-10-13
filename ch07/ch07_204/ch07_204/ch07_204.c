#include <stdio.h>

void swap(int *a, int *b); //함수 원형 선언

int main(void) {
	int x = 10, y = 20;
	printf("a=%d,b=%d\n", x, y);
	swap(&x, &y); //함수 호출
	printf("함수가 호출됨");
	printf("a=%d,b=%d\n", x, y);
	return 0;
}


//int *a = &x *b = &y
void swap(int *a, int *b) { //함수 정의 
	int temp;	
	temp = *a;	
	*a = *b;	
	*b = temp;	
}