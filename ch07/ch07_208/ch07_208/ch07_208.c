#include<stdio.h>

typedef struct {
	char name[10];
	int price;
	int count;
}Item_t;

void PrintItem(const Item_t *item);

int main(void) {
	Item_t item = { "사과",1000,50 };
	PrintItem(&item);
	return 0;
}

void PrintItem(const Item_t* item) {
	printf("품명 : %d\n", item->name);
	printf("단가 : %d\n", item->price);
	printf("수량 : %d\n", item->count);
}