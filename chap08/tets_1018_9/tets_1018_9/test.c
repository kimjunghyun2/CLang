/*
다음 요구 내용을 작성하고 실행하시오
1에서 45 사이의 난수를 발생시켜서 로또프로그램을 작성하시오
게임수를 입력 받으세요
1게임당 6개의 숫자와 보너스 숫자 1개를 출력하시오 (숫자 중복 불가)

실행화면 게임수를 입력하세요 (0 : 종료) , 1~5) : q
숫자를 입력하세요~



*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

int main() {
	char input[20];
	int count,i;
	while (1) {

		printf("실행화면 게임수를 입력하세요 (0 : 종료, 1~5 )>> ");
		//count = -1;
		scanf_s("%s", input,(int)sizeof(input));
		printf("%s\n", input);

		count = atoi(input);
		printf("%d\n", count);
		if (isalpha(input)) {
			printf("숫자를 입력해주세요~\n");
			continue;
		}
		else if (count == 0) {
			printf("종료\n");
			break;
		}
		else if (count <0 || count >5) {
			printf("범위밖입니다 1에서 5사이로 입력해주세요\n");
			continue;
		}
		else {
			for (i = 1; i <= count; i++) {
				printf("%d회차 번호 %d \t2\t3\t4\t5\n", i, i);
			}
		}
		while (getchar() != '\n') {}
	}

}