#include<stdio.h>
int main(void) {
	int radius;
	float pi;
	float result;
	//입력을 받기 위한 변수선언 
	printf(" 반지름을 입력해 주세요 :");
	scanf_s("%d", &radius); //scanf_s로 사용
	printf("\n"); //위의 %d 이후에 공백이 있어선 안됨 있을경우 아래의 "원주율을 입력해주세요" 가 무시됨
	printf(" 원주율을 입력해 주세요 :");
	scanf_s(" %f", &pi);
	result = radius * radius * pi;
	printf("반지름 = %d 원주율 = %0.2f\n", radius,pi);
	printf("원의 넓이는 %0.2f입니다", result);
	return 0;
}