/*
���� �䱸 ������ �ۼ��ϰ� �����Ͻÿ�
1���� 45 ������ ������ �߻����Ѽ� �ζ����α׷��� �ۼ��Ͻÿ�
���Ӽ��� �Է� ��������
1���Ӵ� 6���� ���ڿ� ���ʽ� ���� 1���� ����Ͻÿ� (���� �ߺ� �Ұ�)

����ȭ�� ���Ӽ��� �Է��ϼ��� (0 : ����) , 1~5) : q
���ڸ� �Է��ϼ���~



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

		printf("����ȭ�� ���Ӽ��� �Է��ϼ��� (0 : ����, 1~5 )>> ");
		//count = -1;
		scanf_s("%s", input,(int)sizeof(input));
		printf("%s\n", input);

		count = atoi(input);
		printf("%d\n", count);
		if (isalpha(input)) {
			printf("���ڸ� �Է����ּ���~\n");
			continue;
		}
		else if (count == 0) {
			printf("����\n");
			break;
		}
		else if (count <0 || count >5) {
			printf("�������Դϴ� 1���� 5���̷� �Է����ּ���\n");
			continue;
		}
		else {
			for (i = 1; i <= count; i++) {
				printf("%dȸ�� ��ȣ %d \t2\t3\t4\t5\n", i, i);
			}
		}
		while (getchar() != '\n') {}
	}

}