#include <stdio.h>
// 구조체 형식 => struct 구조체이름 { 기본타입데이터;} 구조체변수={초기값};
// 구조체 형식의 별칭 typedef
// typedef struct 구조체이름 {기본타입데이터1;} 별칭;
// 별칭 a;

typedef struct {
	char name[10];
	int price;
	int count;
}item_t;									// 구조체를 별칭 item_t로 하고 선언

void printItem(item_t *item);

int main(void) {
	item_t item = { "사과",1000,50 };		//사과 4바이트 int 4바이트 int 4바이트 =12바이트
	printItem(&item);						// 구조체의 포인터를 인자로 넘겨줌
											// 포인터 변수 크기 8바이트
	return 0;
}

void printItem(item_t *item) {				//구조체의 포인터를 인자로 받아
	printf("품명 : %s\n", (*item).name);
	printf("가격 : %d\n", item->price);
	printf("수량 : %d\n", item->count);
}