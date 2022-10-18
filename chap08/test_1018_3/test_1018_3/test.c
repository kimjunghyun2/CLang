#include<stdio.h>

#define MAX 10

int main() {
	int a = 0;
#if MAX>10 //조건식만 여기선 명령문으로 인식을 못함
	{a=MAX;}
#else 
	{a=5;}
#endif
	printf("a = %d\n", a);
}