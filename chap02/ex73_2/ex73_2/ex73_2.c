/*
 문제분석
 1.준비
	데이터 타입 : 변수선언 = 초기값;
	double radius;
	double pi = 3.141592;
	원의 둘레 변수 : eclipse;
	원의 면적 변수 : area;

2.입력
	scanf_s("%lf",&radius);

3.처리
	eclipse = 2 * pi * radius;
	area = radius * radius * pi;

4. 실행결과 출력화면
	
	%f : 형식지정문자는 float 실수형 자료에 사용한다.
	%lf : =>형식지정문자는 double 자료형에 시용한다
	
	원의 반지름을 입력해주세요 : 10
	원의 지름은 : 62.83, 원의 넓이는 314.16 입니다

*/


#include<stdio.h>
#define _USE_MATH_DEFINES  //정확한 파이값을 쓰려고 한다면 사용 
#include<math.h> // 내장된 파이값을 사용하며 지정된변수명은 M_PI
int main() {

	double radius;
	double pi = 3.141592;
	double area, eclipse;
	double mrea, mclipse; // 자체 내장 헤더에서의 파이값을 근거로 함

	printf("원의 반지름을 입력해주세요 : ");
	scanf_s("%lf", &radius);
	area = radius * radius * pi;
	eclipse = 2 * radius * pi;
	mrea = radius * radius * M_PI;
	mclipse = 2 * radius * M_PI;

	printf("원의 지름은 : %0.2lf\t\t, 원의 넓이는 %0.2lf 입니다.\n", eclipse, area);
	printf("M_PI 원의 지름은 : %0.9lf\t\t, 원의 넓이는 %0.9lf 입니다.\n", mclipse, mrea);
	return 0;
}