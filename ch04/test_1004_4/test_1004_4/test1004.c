/*

2. ���ڿ� �迭�� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�

char aa[8] = "Basic-C";
int i;
���ȭ���� 2����

���ڿ� �ſ� ss => Basic-C
�Ųٷ� ��� ss => C-cisaB
*/

#include<stdio.h>
int main() {
	char aa[8] = "Basic-C";
	int i;


	printf("���ڿ� �迭 ss =>  ");
	for (i = 0; i < 8; i++) {
		printf("%c", aa[i]);
	}
	printf("\n");
	printf("�Ųٷ� ��� ss =>  ");
	for (i = 7; i >=0 ; i--) {
		printf("%c", aa[i]);
	}
	return 0;
}