#include<stdio.h>
int main(void) {
	int val1 = 10, val2 = 20;
	int re = (val1 > val2);
	char dec = (val1 < val2);
	printf("True��1 False�� 0 re�� ����? : %d\n", re);
	printf("True��1 False�� 0 rec�� ����? : %c\n", dec);
}