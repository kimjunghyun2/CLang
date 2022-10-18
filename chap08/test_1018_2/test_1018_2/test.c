#include<stdio.h>

#define SIZE 10

#define OUT printf("%d",a);

#define add(a) a+10
#define sub(a,b) (a)-(b)

#undef add; // 매크로 취소

int main() {
	int a = 20;
	printf("SIZE =  % d\n",SIZE);
	OUT;

	printf("add(20) = %d\n", add(20));
	printf("sub(10,20) = %d\n", sub(10, 20));
}