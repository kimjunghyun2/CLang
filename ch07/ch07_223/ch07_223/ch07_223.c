#include<stdio.h>
int add(int a, int b);
int sub(int a, int b);

int main(void) {
	int result;
	int (*calc)(int, int);

	calc = add;
	result = calc(20, 10);					//add �Լ��� ������ ���
	printf("Calc result : %d\n", result);	//�Լ��� �����ͷ� �Լ� ȣ��

	calc = sub;								//sub �Լ��� ������ ���
	result = calc(20, 10);					//�Լ��� �����ͷ� �Լ� ȣ��
	printf("Calc result: %d\n", result);	// �Լ��� & ���� �Լ��� �����ص� �ּҰ� �����

	return 0;
}

int add(int a, int b) {
	return a + b;
}
int sub(int a, int b) {
	return a - b;
}