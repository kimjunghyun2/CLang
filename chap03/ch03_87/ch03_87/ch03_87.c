/*

5학생의 수학점수를 입력받아 90이상인 점수만 출력하시오 

준비 
	5명의 점수를 반복 
	입력변수를 선언
입력
	scanf_s("%d",)
처리 
	조건식 " if (n)>=90 이면 출력
출력
1. 입력점수 : 50
2. 입력 점수 : 95
점수는 95입니다.


*/
/*



*/

#include<stdio.h>
int main() {
	
	int bi = 13000;
	int am;

	printf("이번 달 통화시간을 분단위로 입력하세요 ");
	scanf_s("%d", &am);


	if (am < 100) {
		bi = bi + am * 50;
	}
	else if(am<200) {
		bi = bi + 100 * 50;
		bi = bi + (am - 100) * 30;
	}
	else {
		bi = bi + 100 * 50;
		bi = bi + 100 * 30;
		bi = bi + (am - 200) * 20;
	}
	printf("통화요금은 %d원입니다.\n", bi);
	
	return 0;

}
