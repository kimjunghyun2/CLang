#include <stdio.h>
int main(void) {

	int v1 = 0, re1;
	int v2 = 0, re2;

	re1 = v1++ + v1++ + v1++;
	printf("v1 = %d\t re1 = %d\n", v1, re1);

	re1 = v1++ + v1++ + v1++;
	printf("v1 = %d\t re1 = %d\n", v1, re1);
	return 0;
}