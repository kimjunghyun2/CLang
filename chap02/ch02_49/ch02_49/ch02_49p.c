#include<stdio.h>

int main(void) {
	int radius = 10;
	double pi = 3.141592;
	double result;
	result = radius * radius * pi;
	printf(" radius = %05d\n", radius);
	printf(" PI= %7.6f\n", pi);
	printf(" ������ %d�� ���� ���̴� %5.2f\n", radius, result);
	printf("\n\n");
	printf(" radius = %5d\n", radius); // �������� ����
	printf(" radius = %-5d\n", radius); // ���������� ����

	return 0;
}