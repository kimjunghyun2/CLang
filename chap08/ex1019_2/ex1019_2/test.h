#pragma once
//구조체,문자열, 헤더파일,
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Member {

	char name[20];
	int age;
	char pn[20];
	struct Member* next;
}NODE_t;

//첫번째 노드 전역변수
NODE_t* head;

//연결리스트를 만들어서 정상작동하는 함수를 정의 
void init_s() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t));

	if (head == NULL) {
		printf("단순연결리스트를 생성하지 못했습니다\n");
	}
	else {
		printf("단순연결리스트를 성공했습니다\n");
	}
}
//연결리스트 성공 후 새로 데이터를 만드는 함수정의 선언
NODE_t* new_node() { //리턴타입은 NODE_t구조체
	NODE_t *data = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (data != NULL) { //data에 초기값이 있으면
		printf("이름을 입력하세요 >> ");
		scanf_s("%s", &data->name, sizeof(data->name)); // 여기서 왜 &를 써야 작동되는지 알아볼것
		printf("나이을 입력하세요 >> ");
		scanf_s("%d", &data->age, sizeof(data->age)); // 기억이 안난다.. 
		printf("전화번호를 입력하세요 >> ");
		scanf_s("%s", &data->pn, sizeof(data->pn));
	}// 새 데이터를 입력받아 넣으세요
	else {
		printf("데이터 메모리 할당 실패! \n");
	}
	printf("새로운 데이터를 생성하였습니다.[%s],[%d],[%s]\n",data->name,data->age,data->pn);
	//함수의 리턴타입은 구조체 NODE_t* data
	return data;
}
//출력함수 정의,선언
void print_node() { // 순번 출력 수정바람 
	printf("======================================================\n");
	NODE_t* p = head; // 주소밀기를 위한 *p = head 지정
	/* node의 주소값을 head로 초기화
	* head의 데이터는 없고 다음노드의 값은 있다. 
	* data의 첫번째 데이터를 지정하는 next는 데이터를 생성해서 있다.
	* data는 함수 new)node에서 데이터를 생성했으므로 next있다.
	* NULL이 아니므로 참이어서 while를 실행한다.
	*/
	while (p->next != NULL) { //******중요*************
		//포인터이동 p는 헤드의 주소값을 가지고 있지만 
		//head의 next주소를 p->next는다음 node
		
		p = p->next;
		printf("순번[%d], 이름[%s], 나이[%d] 전화번호[%s]\n",p->name,p->age,p->pn );//data를 못쓰는 대신 p를 사용
	}//while end
	printf("======================================================\n");
}

//데이터를 입력하면 연결리스트에 등록해야함(추가,append)
/* 생성 => 새로 만듬
*  추가 => 무조건 마지막 글이 됨 
*  삽입 => 중간에 들어갈 수 있음
*/
void append_node(NODE_t* d2) {
	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;
	} 
	p->next = d2;
	printf("새로운 데이터를 생성하였습니다.[%s],[%d],[%s]\n",d2->name, d2->age,d2->pn);
}

//데이터 중간 삽입 하는 함수 정의
void insert_node(NODE_t* prev, NODE_t* d3) {
	d3->next = prev->next;
	prev->next = d3;
	printf("데이터를 삽입했습니다.[%s],[%d],[%s]\n",d3->name, d3->age,d3->pn);
}
//데이터 삭제 함수 정의 => 매개변수를 데이터로 지정
void delete_node(NODE_t* d4) {
	NODE_t* p = head;
	while (p->next != d4) {// 지울 데이터의 노드를 찾는다.
		p = p->next;
	} 
	if (p != NULL) {
		p->next = d4->next;
		printf("데이터를 삭제했습니다.[%s],[%d],[%s]\n", d4->name, d4->age,d4->pn);
		free(d4);
	}
}

