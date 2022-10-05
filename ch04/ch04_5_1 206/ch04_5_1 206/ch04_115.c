#include<stdio.h>
#include<string.h>
#include<malloc.h>

#define MAX_INPUT 256

int main(void) {
	char input[MAX_INPUT] = { 0 }; //�迭 ���� : ������Ÿ�� �迭��[�迭ũ��]={0};
	char* output = NULL; // �����ͺ��������� �ʱⰪ�� NULL�̰� ��ȿ�� ���� �ƴϴ�.
	int length, ch;

	fgets(input, MAX_INPUT - 1, stdin); //���ڿ� 255�� �Է¹޾� input�� ���� (ǥ���Լ�)
	//scanf_s()�Լ��� ���Ⱑ �� �ٹٲ�
	//���� �Է½� �������� NULL�� �ڵ����� �ԷµǾ� ���� �˷��� 
	//stdin : ǥ���Է��� Ű���带 �ǹ�
	length = strlen(input) + 1; //������ NULL�� �����ϱ� ���� 1�� ����
	output = (char*)malloc(length);

	for (ch = 0; ch < length; ch++) {
		if (input[ch] >= 'a' && input[ch] <= 'z')
			output[ch] = input[ch] + 'A' - 'a';
		else
			output[ch] = input[ch];
	}

	printf("input : %s", input);
	printf("output : %s", output);

	free(output);
	return 0;
}