#include<stdio.h>
int main() {
	double cost=24.00; // 원금
	int pyear; // 1627년
	int cyear = 2010;
	for (pyear = 1627; pyear < cyear; pyear++) {
		printf("1627년에 저금한 24달러의 가치는 %d년에는 %0.2lf달러 입니다\n", pyear, cost);
		cost = cost * 1.08;
		
	}
	printf("1627년에 저금한 24달러의 가치는 %d년에는 %0.2lf달러 입니다\n", pyear, cost);
}//151,883,149,141,875달러