#include<stdio.h>
int main() {

	int key;

	while (1) {
		printf("����� ���� �Է��Ͻÿ� : ");
		scanf_s("%d", &key);
		if (key == 0) {
			break;
		}//if ����
		else if (key < 0 || key>9) {
			continue;
		}//else~if ����
		else {
			for (int i = 1; i < 10; i++) {
				printf("%d * %d = %d\n", key, i, key * i);

			}//for�� ����
		}//else�� ����
	} //while(1) ����
	printf("����");
}//main() ����