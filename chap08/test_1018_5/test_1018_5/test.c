#include<stdio.h>
int main() {
	//char a = getchar(); // �� ���ڸ� �Է� �޾� a�� ����
	//putchar(a); // �� ���ڸ� �μ��� ���� a ���� ������ ��� 

	char input;
	char qw[20];
	while (1) {
		//getchar(); // ���͹���
		printf("getchar �Է� >> ");
		input = getchar();
		if (input != EOF) {
			putchar(input);
			printf("\n");
		}else{
				break;
		}
		getchar(); // ���͹���
		printf("gets_s�Է� >> ");
		gets_s(qw,20);
		
		puts(qw);

	}
}