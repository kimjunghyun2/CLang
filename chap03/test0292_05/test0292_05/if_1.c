/*

�ܼ� if�� ����
input=> 1�Է��ϰ� 10�ϰ� ������ 2�� ���ϰ� 10�ƴϸ� 3�� ���Ѵ�.
input= 4
input->10
input =12
*/
#include<stdio.h>
int main() {
	//�غ� : �Էº�������, ���ϱ⺯������
	int a, b;
	printf("input->");
	scanf_s("%d", &a);

	if (a == 10) {
		b = a + 2;
	}
	else{
		printf("%d", a + 3);
	}
	
}