#include<stdio.h>
int main() {
	int val1 = 15; //0000 1111
	int val2 = 28; //0001 1100

	int logicAnd, bitAnd;

	logicAnd = val1 && val2;
	printf("%d & %d = %d\n",val1,val2,logicAnd );

	bitAnd = val1 & val2;
	printf("%d & %d = %d\n", val1, val2, bitAnd);
	printf("val<<2 = %d\n", val1<<2);
	printf("val>>2 = %d\n", val1>>2);

	printf("val<<4 = %d\n", val1 << 4);
	printf("val>>4 = %d\n", val1 >> 4);
}