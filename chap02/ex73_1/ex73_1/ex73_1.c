/*
1. �����м�
�غ� :	������Ÿ�� ��������� �ʱⰪ
		�Էº������� int height
		����ϴ� ���� ���� meight,cmeight

�Է�:	scanf_s("%d", &input);

ó��:	meight = height / 100;
		cmeight = height % 100;

�������ȭ��
		Ű�� cm�� �Է����ּ��� : 
		Ű�� m cm �Դϴ�.
*/

#include<stdio.h>
int main() {
	int height;
	int meight;
	int cmeight;
	printf("Ű�� cm������ �Է����ּ��� : ");
	scanf_s("%d", &height);
	meight = height / 100;
	cmeight = height % 100;

	printf("Ű�� %dm %dcm �Դϴ�", meight,cmeight);



	return 0;
}