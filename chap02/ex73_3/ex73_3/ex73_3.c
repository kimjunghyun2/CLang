/*
 문제분석

 0. 문제 
	나이를 입력받고 현재까지의 나의 밥값을 계산하시오
	밥값은 3000원이며, 하루 3끼를 먹습니다.

 1.준비
	데이터 타입 : 변수선언 = 초기값;
	int age; // 입력 받을 나이 변수  
	int pay = 21000; // 하루 고정된 밥값 21000

	int yResult; //  현재까지의 밥값을 (나이 X 365 X 밥값 X 3) 으로 계산한 경우를 저장할 변수명
	int dResult; // 현재까지의 밥값을 (((나이-1)*365+오늘 날짜까지의 일수)*3 *밥값 으로 계산시  
	오늘 날짜까지의 일수는 270일이라 가정 



2.입력
	scanf_s("%d",&age);

3.처리
	dAge = age - 1;				// A의 경우 계산될 년수

	dDate = dAge * 365 + oDay;	// (나이-1)*365 +270로 A의 경우 일수를 변수 dDate에 저장
	yDate = age * 365;			// B의 경우 계산될 일수 나이 * 365일

	dResult = dDate * pay ;		// A의 경우 총액
	yResult = yDate * pay ;		// B의 경우 총액

	dBill = dResult / 10000;	
	yBill = yResult / 10000;

	dCoin = dResult % 10000;
	yCoin = yResult % 10000;

4. 실행결과 출력화면


	나이를 입력해 주세요 : 30
	오늘까지의 밥값은 22995만 0원 입니다.
	오늘까지 일수로 친 밥값은 22795만 5000원 입니다.

*/


#include<stdio.h>
int main() {

	int age;
	int dAge=0;
	int oDay = 270;//오늘까지의 일수 270
	int dDate = 0;
	int yDate;
	int pay = 21000; // 최소단위 1000원으로 계산
	
	int yResult; // 연도만 계산시
	int dResult; // 오늘 일자까지 계산시

	int yBill, dBill;// 10000원 이상
	int yCoin, dCoin;// 1000원이하

	printf("나이를 입력해주세요 : ");
	scanf_s("%d", &age);
	dAge = age - 1;
	yDate = age * 365;
	dDate = dAge * 365 + oDay; // 오늘까지를 일수로 세서 계산시
	yResult = age * pay * 365;
	dResult = dDate * pay ; 
	
	yBill = yResult / 10000;
	dBill = dResult / 10000;
	yCoin = yResult % 10000;
	dCoin = dResult % 10000;



	printf("오늘까지의 밥값은 %d만 %d원 입니다.\n",yBill,yCoin);
	printf("오늘까지 일수로 친 밥값은 %d만 %d원 입니다.\n\n",dBill,dCoin);

	printf("age = %d\t dAge = %d\n", age, dAge);
	printf("ydate = %d\t dDate = %d\n", yDate, dDate);
	printf("yResult = %d\t dResult = %d\n", yResult, dResult);
	return 0;
}