/*
chapter03 �ݺ��� ����

�ݺ� :	������ Ƚ���� �ݺ�(for)
		������ Ƚ���� ���� �� �ݺ� ���(while, do-while)
���� :	���ǽ��� �Ǵܿ� ���� �б��ϴ� ����
		(if, if-else, if~else if,if~else if ~ else)
		(switch)


*/

#include<stdio.h>
int main() {
	int loop = 1;
	int key;
	while (loop <= 10) {
		printf("%d little indian boy\n", loop);

		loop++;
	}

	do {
		printf("%d Little \n", loop);
		loop++;
	} while (loop <= 20);

	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t", i);
	}

	return 0;
}