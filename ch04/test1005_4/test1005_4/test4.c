/*
a = good
b = good
c = good
d = good~����������?ood
���ڿ� �Է� = abcdef
�Էµ� ���� = abcdef
�Է¹��� ������ ���� = 6
�Ųٷ� ��� = fedcba

*/
#include<stdio.h>
#include<string.h>
int main() {
	char a[5] = "good";
	char b[5] = { 'g','o','o','d','\0' };
	char c[5];
	c[0] = 'g';
	c[1] = 'o';
	c[2] = 'o';
	c[3] = 'd';
	c[4] = '\0';
	//c = 'good': �����߻�
	char d[5] = "good~"; // �迭�� ũ�⸦ �Ѿ����Ƿ� �����߻�
	//���� ���� ���� (���Ĺ���) : %d(������),%f,%c,%s,%p,%x
	
	printf("a=%s\n", a);
	printf("b=%s\n", b);
	printf("c=%s\n", c);
	printf("d=%s\n", d);

	//�Է¹��� ���ڿ� ���
	char pop[10];
	printf("���ڿ� �Է� : ");
	scanf_s("%s", pop, sizeof(pop));
	printf("�Էµ� ���ڿ� : %s\n", pop);


	return 0;
	
}