#include <stdio.h>
// ����ü ���� => struct ����ü�̸� { �⺻Ÿ�Ե�����;} ����ü����={�ʱⰪ};
// ����ü ������ ��Ī typedef
// typedef struct ����ü�̸� {�⺻Ÿ�Ե�����1;} ��Ī;
// ��Ī a;

typedef struct {
	char name[10];
	int price;
	int count;
}item_t;									// ����ü�� ��Ī item_t�� �ϰ� ����

void printItem(item_t *item);

int main(void) {
	item_t item = { "���",1000,50 };		//��� 4����Ʈ int 4����Ʈ int 4����Ʈ =12����Ʈ
	printItem(&item);						// ����ü�� �����͸� ���ڷ� �Ѱ���
											// ������ ���� ũ�� 8����Ʈ
	return 0;
}

void printItem(item_t *item) {				//����ü�� �����͸� ���ڷ� �޾�
	printf("ǰ�� : %s\n", (*item).name);
	printf("���� : %d\n", item->price);
	printf("���� : %d\n", item->count);
}