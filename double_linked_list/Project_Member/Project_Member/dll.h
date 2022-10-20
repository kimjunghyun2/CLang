/*
init_dll() : 이중연결리스트의 head노드 생성
 print node(): 이중연결리스트의 head노드 생성
 new_node() : 새로운 노드 생성
 append_node() : 새로운 노드를 이중 연결리스트에 추가
 insert_node() : 새로운 노드를 이중연결리스트에 삽입
 delete_node() : 노드 삭제
 search_node() : 노드 검색
*/
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct mem {
	char name[20];
	int age;
	char pn[20];
	struct mem* prev; // 이전 노드 연결 포인터;
	struct mem* next; // 다음 노드 연결 포인터;
}NODE_t;

NODE_t* head; //전역변수

//연결리스트 생성 및 초기화 작업 함수 init_dll()
void init_dll() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t)); // 데이터 타입이 NODE_t*이므로 calloc(...)를 NODE_t*으로 캐스팅
	if (head == NULL) {//생성 실패시 
		printf("이중연결리스트를 생성하지 못했습니다\n");
	}
}

void print_node() {
	NODE_t* p = head;
	printf("===============================\n");
	printf("\t\t 회원 관리 프로그램\n");
	printf("===============================\n");

	if (p->next != NULL) {
		printf("===============================\n");
		printf("순번\t 이름\t 나이 \t 전화번호 \n");
		printf("===============================\n");

		//자료의 갯수만큼 반복
		int count = 1;
		while (p->next != NULL) {
			p = p->next;
			printf("[%d]\t %s\t %d\t %s\n",count++,p->name,p->age,p->pn);
		}
		printf("===============================\n");
	}
}

//데이터 생성
NODE_t* new_node() {
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (data != NULL) {
		printf("이름을 입력하세요 >>");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("나이를 입력하세요 >>");
		scanf_s("%d", &data->age, sizeof(data->age)); // age는 선언,포인터로 선언하지 않았음
		printf("전화번호를 입력하세요 >>");
		scanf_s("%s", data->pn, sizeof(data->pn));
	}
	else {
		printf("메모리 할당 실패\n");
	}
	return data;
}

//이중연결리스트에 데이터 추가
void append_node(NODE_t* data) {
	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = data;
	// 노드가 없는 경우 실행이 되질 않는다.
	// 처음으로 추가되는 경우  prev에 NULL을지정
	if (p != head) {
		data->prev = p;
	}
}
//이중연결리스트의 삽입 
void insert_node(int position, NODE_t* data) {
	NODE_t* p = head;

	for (int i = 0; i < position;i++) {
		if (p->next != NULL) {
			p = p->next;
		}
		else {
			break;
		}

		if (p == head) {//첫번째 노드에 삽입할 경우 
			data->next = p->next;
			data->next->prev = data;
			p->next = data;
		}
		else if (p->next == NULL) {//마지막에 삽입
			data->prev = p;
			p->next = data;
		}
		else {//중간노드에 삽입
			data->next = p->next;
			data->next->prev = data;
			p->next = data;
			data->prev = p;
		}
	}
}
//데이터 삭제
void delete_node(){
	char n1[20];
	printf("삭제할 이름을 입력하시오 >> ");
	scanf_s("%s",n1,sizeof(n1));
	getchar();//엔터방지

	NODE_t* p = head;

	while (p->next != NULL) {//자료가 있다면
		p = p->next;
		//해당 노드를 찾기에서 위치를 물어보고 삭제
		if (!strcmp(p->name, n1)) {
			//한개인 경우
			if (p->next == NULL && p->prev == NULL) {// 노드가 head와 node1 단 둘뿐이며 node1의 next,prev가 모두 NULL일 경우
				head->next = NULL; // 이경우 이전글 다음글로 비유하면 혼동된다.
			}
			else if (p->next == NULL && p->prev != NULL) { // 마지막 노드이면 (다음글이 없고 이전글은 있으면)
				p->prev->next = NULL; // p의 이전글의 다음글은 NULL이 된다.
			}
			else if (p->prev == NULL && p->next != NULL) {//처음 노드이면 (이전글은 없는데 다음글은 있으면)
				p->next->prev = NULL; //p의 다음글의 이전글은 NULL이 된다 (?)
				head->next = p->next; // head의 다음글은 p의 다음글이 된다.
			}
			else {
				//중간 노드이면 삭제
				p->next->prev = p->prev; // p의 이전글은 p의 다음글의 이전글이 된다.
				p->prev->next = p->next; //p의 다음글은 p의 이전글의 다음글이 된다
			}
			free(p);
			break;
		}
	}
}

//데이터 검색 
void search_node() {
	char n1[20];
	printf("검색하고자 하는 이름을 입력하세요 >> ");
	scanf_s("%s", n1, sizeof(n1));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL) { //p의 다음글에 데이터가 있으면 반복
		p = p->next;
		if (!strcmp(p->name, n1)) { // p의 이름과 사용자가 입력한 n1이 동일하다면 
			//(strcmp는 동일하면 0을 반환하므로 !(NOT)을 붙여 1(참)을 만든다) 
			printf("이름 %s\t 나이 %d\t 전화번호 %s\n", p->name, p->age, p->pn); // 해당 p 구조체 출력
			//getchar();//cls 방지
		}

	}
}
