#include<stdio.h>
int main(void) {
	
	int val1 = 0, result1;
	int val2 = 0, result2;

	result1 = val1++ + val1++ + val1++;
	result2 = ++val2 + ++val2 + ++val2;

	printf("val1 = %d, result1 = %d\n", val1, result1); // val1 = 3 result1 = 0
	printf("val2 = %d, result2 = %d\n", val2, result2); // val2 = 3 result2 = 9


	return 0;

}