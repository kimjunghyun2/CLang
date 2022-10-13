/*

함수정의 선언 => 리턴타입 함수명(매개타입 매개변수){함수의 본체}
				 int	  func  (int	  x		  )

함수원형 선언 => 함수 호출전 함수가 미리 정의 되어 있어야 함 
				 함수정의 보다 함수호출이 먼저 되면 
				 안되므로 함수원형을 전처리기에 먼저 선언

함수의 인자		=> 사용자 정의 함수 호출 
	   인수		=> 함수 호풀시 전달 하는 값 =>매개변수에게
	   메개변수 => 함수를 호출 할때 전달되는 인수의 값을 저장하는 변수

인수와 매개변수 => 인수와 매개변수는 나열된 순서대로 1:1 매칭
				   인수와 매개변수는 자료형이 일치해야 함

인수 전달 방법 *
		
값에 의한 호출` => 
참조에 의한 호출=>


인자
*/

#include<stdio.h>

void output(int taken);

int main(void) {
	int given = 10;
	printf("main이 넘겨준 값: %d(%p)\n", given,&given);
	output(given);
	return 0;
}
void output(int taken) {
	printf("output이 받은 값 : %d(%p)\n", taken,&taken);
}