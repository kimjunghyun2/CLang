#include<stdio.h>
#include<malloc.h>

int main(void) {
	int stu, s, sum = 0;
	int *score = NULL;

	printf("���� ó���� �л� ���� �Է��Ͻÿ� : ");
	scanf_s("%d", &stu);
	score = (int *)malloc(sizeof(int)*stu);

	printf("�л��� ������ �Է��Ͻÿ� : \n");

	for (s = 0; s < stu; s++) {
		printf("%d��:", s+1);
		scanf_s("%d", score[s]);

	}
	printf("-----------------------------------\m");
	for (s = 0; s < stu; s++) {
		sum += score[s];
		printf("%d��: %$3 \n", s + 1, score[s]);

		}


	printf("-----------------------------------\m");
	printf("����: %3 ��\n", sum);
	printf("��� %3.2f ��\n", sum/stu);

	free(score);
	return 0;
}