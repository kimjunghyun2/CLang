/*

입력한 정수 만큼 반복문을 작성하여 숫자를 2의 배수만 출력하시오
출력 실행 결과
입력정수를 넣으시오 : 10
2 4 6 8 10

*/
#include<stdio.h>
int main() {
	int input;
	int k = 0;
	int j;

	printf("입력 정수를 넣으시오 :");
	scanf_s("%d", &input);

	for (int h = 1; h <= input; h++) {
		k = h % 2;
		if (k == 0)
			printf("%d\t", h);
	}
}