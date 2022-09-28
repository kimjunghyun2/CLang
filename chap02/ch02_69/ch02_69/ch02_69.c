#include<stdio.h>
int main() {

	int i = 1;
	double d = 2.0;
	double re = i / d;


	printf("%d/%0.2f = %0.2f  \n", i, d, re);
	int a = 1;
	int b = 2;
	double re1 = a / b;
	printf("%d/%d = %0.2f  \n", a, b, re1);

	int re2 = i / d;
	printf("%d/%0.2f = %d  \n", i, d, re2);

	int re3 = (int)i / d;
	printf("%d/%0.2f = %d  \n", i, d, re3);

	//상수의 데이터 타입
	float pi = 3.14159234567f;
	printf("pi = %12.10f\n");
	// 데이터 타입의 크기 : size of 
	int j;
	double d1 = 0.0;
	printf("size of int : %d\n", sizeof(int));
	printf("size of i : %d\n", sizeof(i));
	printf("size of double : %d\n", sizeof(double));
	printf("size of d1 : %d\n", sizeof(d1));

	return 0;
}