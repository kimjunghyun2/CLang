/*
메뉴 방식으로 동작하는 단위환산 프로그램을 작성하세요

여기서 항목을 선택하면 서브메뉴를 보여줍니다.

0번을 선택하면 마일 단위로 입력받아 킬로 미터 단위로 변환하여 출력해줍니다 변환에는 다음 변환식을 사용합니다


1. 요구사항
1마일 = 1.6093 km
1파운드 = 0.45359 kg
1갤런 =  3.7854 리터
1에이커 = 0.40468 헥타르

변환이 끝나면 다시 메인메뉴로 돌아갑니다.

2.설계
마일 >> 킬로미터 변환 함수명 mile2km()
킬로미터 >> 마일 변환 함수명 km2mile()

파운드 >> 킬로그램 변환 함수명 p2kg()
킬로그램 >> 파운드 변환 함수명 kg2p()

갤론 >> 리터 변환 함수명 G2L()
리터 >> 갤런 변환 함수명 L2G()

에이커 >> 헥타르 변환 함수명 ak2ht()
헥타르 >> 에이커 변환 함수명 ht()ak

모두 float,double을 반환해야함 


4. 피드백
메인메뉴>>서브메뉴는 배열과 포인터를 사용해 더 효율적으로 구성할 수 있어 보임 
아마 실제로 사용하게 된다면 실습과제 해설보다 자원을 엄청 갉아먹을걸로 예상됨 
main이 꽤 두꺼움 main단을 줄이는 것을 목표로 수정 바람
*/

#include<stdio.h>
#define MAIN_MENU 5
#define SUB_MENU 2

float mile2km(float a);
float km2mile(float a);

float p2kg(float a);
float kg2p(float a);

float G2L(float a);
float L2G(float a);

float ak2ht(float a);
float ht2ak(float a);

int select_sub1();
int select_sub2();
int select_sub3();
int select_sub4();


int main() {
	// 여기선 메뉴 방식의 구현만 
	// 배열 메인메뉴에 넣어두고 포인터를 넣는 방법도 있겠지만 여기선 직접 지정 
	int menu,sub;
	float b;
	double key;
	//double b;
	while (1) {
		printf("============메인메뉴=============\n");
		printf("0. 길이 변환\n");
		printf("1. 무게 변환\n");
		printf("2. 부피 변환\n");
		printf("3. 넓이 변환\n");
		printf("4. 종료\n");
		printf("=================================\n");
		printf(" 메뉴를 선택해 주세요 >> ");
		scanf_s("%d", &menu);
		if(menu == 4){
			printf("종료를 선택했습니다 곧 종료됩니다");
			break;
		}
		else if (menu == 0) {
			sub = select_sub1();
			if (sub == 0) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				mile2km(key);
				//printf("%f 마일 = %f 킬로미터\n", key, b);
			}
			else if (sub == 1) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				km2mile(key);
			}
			else {
				printf("잘못된 입력입니다.\n");
				continue;
			}
		}
		else if (menu == 1) {
			sub = select_sub2();
			if (sub == 0) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				p2kg(key);
			}
			else if (sub == 1) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				kg2p(key);
			}
			else {
				printf("잘못된 입력입니다.\n");
				continue;
			}
		}
		else if (menu == 2) {
			sub = select_sub3();
			if (sub == 0) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				G2L(key);
			}
			else if (sub == 1) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				L2G(key);
			}
			else {
				printf("잘못된 입력입니다.\n");
				continue;
			}
		}
		else if (menu == 3) {
			sub = select_sub4();
			if (sub == 0) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				ak2ht(key);
			}
			else if (sub == 1) {
				printf(" 숫자를 입력하세요 >> ");
				scanf_s("%lf", &key);
				ht2ak(key);
			}
			else {
				printf("잘못된 입력입니다.\n");
				continue;
			}
		}
		else {
			printf("잘못된 입력입니다. 다시시작합니다\n");
			continue;
		}



	}

}
float mile2km(float a) {
	float b;
	b = 1.6093 * a;
	printf("%f 마일 = %0.5f 킬로미터\n", a, b);
	return b;
}
float km2mile(float a) {
	float b;
	b = 0.6214 * a;
	printf("%lf 킬로미터 = %0.5lf 마일\n", a, b);
	return b;
}

float p2kg(float a) {
	float b;
	b = 0.45359 * a;
	printf("%lf 파운드 = %0.5lf 킬로그램\n", a, b);
	return b;
}
float kg2p(float a) {
	float b;
	b = 2.20463 * a;
	printf("%lf 킬로그램 =  %0.5lf 파운드\n", a, b);
	return b;
}

float G2L(float a) {
	float b;
	b = 3.7854 * a;
	printf("%lf 갤런 = %0.5lf 리터\n", a, b);
	return b;
}
float L2G(float a) {
	float b;
	b = 0.2642 * a;
	printf("%lf 리터 = %0.5lf 갤런\n", a, b);
	return b;
}

float ak2ht(float a) {
	float b;
	b = 0.40468 * a;
	printf("%lf 에이커 = %0.5lf 헥타르\n", a, b);
	return b;
}
float ht2ak(float a) {
	float b;
	b = 2.47109 * a;
	printf("%lf 헥타르 =  %0.5lf 에이커\n", a, b);
	return b;
}
int select_sub1() {
	int sub;
	printf("============서브메뉴=============\n");
	printf("0. 마일-->킬로미터\n");
	printf("1. 킬로미터-->마일\n");
	printf("=================================\n");
	printf("서브 메뉴를 선택하세요 >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub2() {
	int sub;
	printf("============서브메뉴=============\n");
	printf("0. 파운드-->킬로그램\n");
	printf("1. 킬로그램-->파운드\n");
	printf("=================================\n");
	printf("서브 메뉴를 선택하세요 >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub3() {
	int sub;
	printf("============서브메뉴=============\n");
	printf("0. 갤런-->리터\n");
	printf("1. 리터-->갤런\n");
	printf("=================================\n");
	printf("서브 메뉴를 선택하세요 >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub4() {
	int sub;
	printf("============서브메뉴=============\n");
	printf("0. 에이커-->헥타르\n");
	printf("1. 헥타르-->에이커\n");
	printf("=================================\n");
	printf("서브 메뉴를 선택하세요 >> ");
	scanf_s("%d", &sub);
	return sub;
}