/*
프로잭트명 : test_1005_2
파일 : test.c
국어, 영어, 수학 점수를 입력 받아 배열에 저장하고 출력하시요

​출력결과 화면
입력전수
1 입력 = 90
2 입력 = 90
3 입력 = 80
​

​출력점수
국어=90
영어=90
수학=80

총점=260
평균=86.6

int a[SIZE] = {0,0,0};
입력 for문 scanf_s()
출력 printf문

여기선 국어 영어 수학이 따로 배열에 지정되어있지 않으며,
printf에 이미 지정되어 있다 가정
문자열에 따로 따로 지정하는건 2차로


배열은 점수가 될것 즉 포인터를 여기다씀
아니면 과목을 배열로?

sub[3] ={국어,수학,영어}

*/

#include<stdio.h>//표준 입출력 라이브러리
#include<string.h>
#include<malloc.h>//메모리 할당 라이브러리
#define SIZE 3//기호 상수 선언
#define SUB 2
int main(void) {
	int i, sum = 0;// 합 저장용 sum, for문 인수 i 
	int* score = NULL; // 포인터 변수 선언 초기값으로 메모리 0번지가 있는 
	//sub[SIZE] = { "국어","영어","수학"};
	char* sub[SIZE] = { "국어","영어","수학"};
	score = (int*)malloc(sizeof(int) * SIZE);
	printf("입력점수 \n");
	for (i = 0; i < SIZE; i++) {
		printf("입력 : ");
		scanf_s("%d", &score[i]);
		sum += score[i];
	}
	printf("출력점수 \n");
	for (i = 0; i < SIZE; i++) {
		printf("%s = %d\n", sub[i], score[i]); // 배열을
	}

	printf("출력점수 \n");
	printf("국어 : %d\n", score[0]);
	printf("수학 : %d\n", score[1]);
	printf("영어 : %d\n", score[2]);
	printf("총점 = %d",sum);
	printf("평균 = %d", sum / SIZE);
	free(score);
	return 0;
}