#define MAX 5
#include<stdio.h>
int main() {
	int a = 10, b = 20, c = 30, d = 40, e = 50;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %d\n", d);
	printf("e = %d\n", e);

	int arr[5] = { 10,20,30,40,50 }; // ������ 5���̰� ���ؽ� 0~4�����Դϴ�.
	for (int i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}


}