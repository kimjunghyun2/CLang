/*
 ###헤더 파일 실습###
hap() 30 + 40 = 70
###매크로 실습###
a = 100
add(20) = 30
sub(20, 10) = 10
add(20) = 40
###조건 컴파일 실습###
#if before size = 0
#if after size = 5
#ifdef after size = 10
*/
#include<stdio.h> // 표준 헤더
#include"test.h"  // 사용자 정의 헤더

#define OUT printf("a=%d\n",a); 
#define add(a) a+10				//매크로 함수 선언
#define sub(a,b) (a)-(b)		//매크로 함수 선언

//조건 컴파일 선언
#ifndef MAX			//MAX가 없으면 참 
#define MAX 10		// MAX 선언
#endif


int main(){
	printf("### 헤더파일 실습 ###\n");
	if (SIZE > 10) {
		printf("hap() %d + %d = %d\n", 10, 20, hap(10, 20));
	}
	else {
		printf("hap() %d + %d = %d\n", 10, 20, hap(30, 40));
	}
	int add = hap(30,40);

	printf("\n### 매크로 실습 ###\n");
	int a = 100;
	OUT;
	printf("add(%d) - %d\n", 20, add(20));				//매크로 함수 호출
	printf("sub(%d,%d) = %d\n", 30, 40, hap(30, 40));	//매크로 함수 호출

#undef add //매크로 취소
#define add(a) a+20
	printf("add(%d) = #d\n",20,add(20));
	printf("\n### 조건식 실습 ###\n");

	int size = 0;
	printf("#if before SIZE = %d", 0);
#if MAX <10 // 조건 컴파일링에게 MAX<10은 거짓이므로 else를 실행
	size = MAX;
#else
	size = 5;
#endif
	printf("#id after size = %d\n", size);

#ifdef MAX // 매크로 MAX가 있으면 참 
	size = MAX;
#else
	size = 5;
#endif
	printf("#id after size = %d\n", size);
}
