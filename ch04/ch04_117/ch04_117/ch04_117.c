#include<stdio.h>
#include<malloc.h>

int main(void) {
	int stu, s, sum = 0;
	int *score = NULL;

	printf("성적 처리할 학생 수를 입력하시오 : ");
	scanf_s("%d", &stu);
	score = (int *)malloc(sizeof(int)*stu);

	printf("학생의 성적을 입력하시오 : \n");

	for (s = 0; s < stu; s++) {
		printf("%d번:", s+1);
		scanf_s("%d", score[s]);

	}
	printf("-----------------------------------\m");
	for (s = 0; s < stu; s++) {
		sum += score[s];
		printf("%d번: %$3 \n", s + 1, score[s]);

		}


	printf("-----------------------------------\m");
	printf("총점: %3 점\n", sum);
	printf("평균 %3.2f 점\n", sum/stu);

	free(score);
	return 0;
}