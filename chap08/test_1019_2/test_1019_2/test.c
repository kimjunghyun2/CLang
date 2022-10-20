#include<stdio.h>
#include<malloc.h>
#include<string.h>
//단순연결리스트 를 구조체로 표현하고 노드연결은 구조체 포인터로
typedef struct MEMBER {
	char name[20];
	int age;
	struct Member* next; // 구조체 포인터 변수 next 
}NODE_t;

int main() {
	//시작노드(head)는 데이터가 없어야 하며 끝노드는 NULL을 직접 넣어야 한다.



	NODE_t* head = (NODE_t*)calloc(1, sizeof(NODE_t)); //head 노드의 메모리 할당
	//head노드의 메모리 할당의 함수는 리턴타입이 미지정 이므로 변수선언시 캐스팅 해줘야 함

	//데이터 노드 추가
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	head->next = data;
	*data->name = "홍길동";
	//strcpy(data->name,"홍길동");
	// 또는 
	// strcpy_s(data->name,20, "홍길동"); <<이것도 가능은 함 
	//data->name = "홍길동";
	data->age = 100;
}