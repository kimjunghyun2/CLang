#include<stdio.h>

int main(void) {
	int radius = 10;
	double pi = 3.141592;
	double result;
	result = radius * radius * pi;
	printf(" radius = %05d\n", radius);
	printf(" PI= %7.6f\n", pi);
	printf(" 반지름 %d인 원의 넓이는 %5.2f\n", radius, result);
	printf("\n\n");
	printf(" radius = %5d\n", radius); // 왼쪽으로 공백
	printf(" radius = %-5d\n", radius); // 오른쪽으로 공백

	return 0;
}