/*
1. 문제분석
준비 :	데이터타입 변수선언과 초기값
		입력변수선언 int height
		계산하는 변수 선언 meight,cmeight

입력:	scanf_s("%d", &input);

처리:	meight = height / 100;
		cmeight = height % 100;

실행출력화면
		키를 cm로 입력해주세요 : 
		키는 m cm 입니다.
*/

#include<stdio.h>
int main() {
	int height;
	int meight;
	int cmeight;
	printf("키를 cm단위로 입력해주세요 : ");
	scanf_s("%d", &height);
	meight = height / 100;
	cmeight = height % 100;

	printf("키는 %dm %dcm 입니다", meight,cmeight);



	return 0;
}