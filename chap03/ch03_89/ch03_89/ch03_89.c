/*

*/
#include<stdio.h>
int main() {

	int mon;

	printf("몇월에 태어났습니까? : ");
	scanf_s("%d", &mon);

	printf("당신의 탄생석은");
	switch (mon)
	{case 1:
		printf("석류석");
		break;
	case 2:
		printf("자수정");
		break;
	case 3:
		printf("아쿠아마린");
		break;
	case 4:
		printf("다이아몬드");
		break;
	case 5:
		printf("에메랄드");
		break;
	case 6:
		printf("진주");
		break;
	case 7:
		printf("루비");
		break;
	case 8:
		printf("페리도트");
		break;
	case 9:
		printf("사파이어");
		break;
	case 10:
		printf("오팔");
		break;
	case 11:
		printf("토파즈");
		break;
	case 12:
		printf("터키석");
		break;

	default:
		printf("짱돌");
		break;
	}
	printf("입니다.\n");
	return 0;
}