#include<stdio.h>
int main(void) {
	int val1 = 10, val2 = 20;
	int re = (val1 > val2);
	char dec = (val1 < val2);
	printf("True면1 False면 0 re의 값은? : %d\n", re);
	printf("True면1 False면 0 rec의 값은? : %c\n", dec);
}