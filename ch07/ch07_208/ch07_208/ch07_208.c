#include<stdio.h>

typedef struct {
	char name[10];
	int price;
	int count;
}Item_t;

void PrintItem(const Item_t *item);

int main(void) {
	Item_t item = { "���",1000,50 };
	PrintItem(&item);
	return 0;
}

void PrintItem(const Item_t* item) {
	printf("ǰ�� : %d\n", item->name);
	printf("�ܰ� : %d\n", item->price);
	printf("���� : %d\n", item->count);
}