#include<stdio.h>
//�Լ���������
int squre(int num);
int Divide(int di1, int di2,int *besult);

int main() {
	int result, input;
	

	printf("������ ����ϰ��� �ϴ� ���� �Է��Ͻÿ� >> ");
	scanf_s("%d", &input);
	if ((result = squre(input)) < 0) {
		printf("�Է°��� ó�� �� �� �ִ� ������ �Ѿ����ϴ�. ");
	}
	else {
		printf("%d ������ %d �Դϴ� \n", input, result);

	}
	int a, b, besult;
	printf("2���� ���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);
	if (Divide(a, b, &besult)) {
		printf("%d ������ %d�� %d �Դϴ�. \n", a, b, besult);
	}
	else {
		printf(" ������ �Ұ�\n");
	}
}
int squre(int num) {
	if (num > 46340 || num < -46340) {
		return -1;
	}
	else {
		return num * num;
	}
}int Divide(int di1, int di2,int *besult) {
	//int besult;
	if (di2 == 0) {
		return 0;
	}
	else {
		*besult = di1 / di2;
		return 1;
	}
	
}