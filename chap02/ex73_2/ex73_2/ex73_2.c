/*
 �����м�
 1.�غ�
	������ Ÿ�� : �������� = �ʱⰪ;
	double radius;
	double pi = 3.141592;
	���� �ѷ� ���� : eclipse;
	���� ���� ���� : area;

2.�Է�
	scanf_s("%lf",&radius);

3.ó��
	eclipse = 2 * pi * radius;
	area = radius * radius * pi;

4. ������ ���ȭ��
	
	%f : �����������ڴ� float �Ǽ��� �ڷῡ ����Ѵ�.
	%lf : =>�����������ڴ� double �ڷ����� �ÿ��Ѵ�
	
	���� �������� �Է����ּ��� : 10
	���� ������ : 62.83, ���� ���̴� 314.16 �Դϴ�

*/


#include<stdio.h>
#define _USE_MATH_DEFINES  //��Ȯ�� ���̰��� ������ �Ѵٸ� ��� 
#include<math.h> // ����� ���̰��� ����ϸ� �����Ⱥ������� M_PI
int main() {

	double radius;
	double pi = 3.141592;
	double area, eclipse;
	double mrea, mclipse; // ��ü ���� ��������� ���̰��� �ٰŷ� ��

	printf("���� �������� �Է����ּ��� : ");
	scanf_s("%lf", &radius);
	area = radius * radius * pi;
	eclipse = 2 * radius * pi;
	mrea = radius * radius * M_PI;
	mclipse = 2 * radius * M_PI;

	printf("���� ������ : %0.2lf\t\t, ���� ���̴� %0.2lf �Դϴ�.\n", eclipse, area);
	printf("M_PI ���� ������ : %0.9lf\t\t, ���� ���̴� %0.9lf �Դϴ�.\n", mclipse, mrea);
	return 0;
}