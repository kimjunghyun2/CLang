#include<stdio.h>
int main(void) {
	int radius;
	float pi;
	float result;
	//�Է��� �ޱ� ���� �������� 
	printf(" �������� �Է��� �ּ��� :");
	scanf_s("%d", &radius); //scanf_s�� ���
	printf("\n"); //���� %d ���Ŀ� ������ �־ �ȵ� ������� �Ʒ��� "�������� �Է����ּ���" �� ���õ�
	printf(" �������� �Է��� �ּ��� :");
	scanf_s(" %f", &pi);
	result = radius * radius * pi;
	printf("������ = %d ������ = %0.2f\n", radius,pi);
	printf("���� ���̴� %0.2f�Դϴ�", result);
	return 0;
}