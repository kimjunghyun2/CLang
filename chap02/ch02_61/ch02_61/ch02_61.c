#include<stdio.h>
int main() {
	int val1 = 0, val2 = 20, re;
	re = (val1 > 10 && val1 < 20); //0

	printf("&&re = %d\n", re);
	
	re = (val1 > 10 || val1 < 20); //0

	printf("&&re = %d\n", re);

	re = (!val1); //0

	printf("&&re = %d\n", re);
	re = (val1 > val2) ? val1 : val2;

	printf("&&re = %d\n", re);

	return 0;
}
