#include<stdio.h>
int main() {
	double cost=24.00; // ����
	int pyear; // 1627��
	int cyear = 2010;
	for (pyear = 1627; pyear < cyear; pyear++) {
		printf("1627�⿡ ������ 24�޷��� ��ġ�� %d�⿡�� %0.2lf�޷� �Դϴ�\n", pyear, cost);
		cost = cost * 1.08;
		
	}
	printf("1627�⿡ ������ 24�޷��� ��ġ�� %d�⿡�� %0.2lf�޷� �Դϴ�\n", pyear, cost);
}//151,883,149,141,875�޷�