#include <stdio.h>

void swap(int *a, int *b); //�Լ� ���� ����

int main(void) {
	int x = 10, y = 20;
	printf("a=%d,b=%d\n", x, y);
	swap(&x, &y); //�Լ� ȣ��
	printf("�Լ��� ȣ���");
	printf("a=%d,b=%d\n", x, y);
	return 0;
}


//int *a = &x *b = &y
void swap(int *a, int *b) { //�Լ� ���� 
	int temp;	
	temp = *a;	
	*a = *b;	
	*b = temp;	
}