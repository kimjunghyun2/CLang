/*

�Է��� ���� ��ŭ �ݺ����� �ۼ��Ͽ� ���ڸ� 2�� ����� ����Ͻÿ�
��� ���� ���
�Է������� �����ÿ� : 10
2 4 6 8 10

*/
#include<stdio.h>
int main() {
	int input;
	int k = 0;
	int j;

	printf("�Է� ������ �����ÿ� :");
	scanf_s("%d", &input);

	for (int h = 1; h <= input; h++) {
		k = h % 2;
		if (k == 0)
			printf("%d\t", h);
	}
}