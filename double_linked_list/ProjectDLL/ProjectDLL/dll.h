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

typedef struct BOOKLIST {
	char code[10];			//도서코드
	char name[20];			//책이름
	char author[20];		//저자
	int year;				//발행연도
	struct BOOKLIST* prev;	// 이전 노드 연결 포인터;
	struct BOOKLIST* next;	// 다음 노드 연결 포인터;
}BOOK_t;

BOOK_t* head; //전역변수
BOOK_t* current; //전역변수

//연결리스트 생성 및 초기화 작업 함수 init_dll()
void init_dll() {
	head = (BOOK_t*)calloc(1, sizeof(BOOK_t)); // 데이터 타입이 BOOK_t*이므로 calloc(...)를 BOOK_t*으로 캐스팅
	if (head == NULL) {//생성 실패시 
		printf("이중연결리스트를 생성하지 못했습니다\n");
	}
}

void print_node() {
	BOOK_t* p = head;
	printf("=======================================================\n");
	printf("\t\t 도서 관리 목록\n");
	printf("=======================================================\n");

	if (p->next != NULL) {
		printf("=======================================================\n");
		printf("순번\t 도서코드\t 책이름\t 저자 \t 발행연도\t  \n");
		printf("=======================================================\n");

		//자료의 갯수만큼 반복
		int count = 1;
		while (p->next != NULL) {
			p = p->next;
			printf("[%d]\t %s\t\t %s\t %s\t %d\n", count++, p->code, p->name, p->author,p->year);
		}
		printf("=======================================================\n");
	}
}

//데이터 생성
BOOK_t* new_node() {
	BOOK_t* data = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (data != NULL) {
		switch (subsel) {
		case APPEND:
		case UPDATE:  // 삭제하고 삽입이기 떄문에 같이 입력받음
			printf("도서코드를 입력하세요 >>");
			scanf_s("%s", data->code, sizeof(data->code));		
			printf("도서명을 입력하세요 : ");
			scanf_s("%s", data->name, sizeof(data->name));
			printf("저자 이름을 입력하세요 : ");
			scanf_s("%s", data->author, sizeof(data->author));
			printf("출판 년도를 입력하세요 : ");
			scanf_s("%d", &data->year);
			break;
		}
	}
	else {
		printf("메모리 할당 실패\n");
	}
	return data;
}

//이중연결리스트에 데이터 추가
void append_node(BOOK_t* data) {
	BOOK_t* p = head;
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
void insert_node(BOOK_t* data) {    // 데이터 삽입
	BOOK_t* p = head;
	while (p->next != NULL) {           // 현재 위치 다음으로 삽입
		p = p->next; 
		if (p == current) {
			break;
		} 
	}
	if (p == head) {   // 첫노드로 삽입하는 경우
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
	}
	else if (p->next == NULL) {  // 마지막노드로 삽입하는 경우
		data->prev = p;
		p->next = data;
	}
	else {  // 중간 노드로 삽입하는 경우
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
		data->prev = p;
	}
}
//데이터 삭제
void delete_node() {
	BOOK_t* p = current;
	if (current->next != NULL) current = current->next;   // 현재 위치를 다음 노드로 설정
	else {
		if (current->prev != NULL) current = current->prev;  // 현재 위치를 이전 노드로 설정
		else current = NULL;   // 현재 위치를 설정 안함.(연결리스트에 노드가 없는 경우)
	}

	if (p->next == NULL && p->prev == NULL) {  // 노드가 한개인 경우
		head->next = NULL;
	}
	else if (p->next == NULL && p->prev != NULL) {  // 마지막 노드이면
		p->prev->next = NULL;
	}
	else if (p->prev == NULL && p->next != NULL) {  // 처음 노드이면
		p->next->prev = NULL;
		head->next = p->next;
	}
	else {   // 중간 노드이면
		p->next->prev = p->prev;
		p->prev->next = p->next;
	}
	free(p);

}
void prevIns_node() {
	//수정하게 될시 삽입과 같은 기능을 수행하나 현재 노드의 다음이 아닌 현재노드 앞에 삽입됨 
	//앞에껄 삭제하고 insert_node를 쓸수도 있으나 
	// 앞의 노드가 헤드일경우 =>삭제안함
	// 
	BOOK_t* p = current;
	if (current->next != NULL) { //현재노드 다음 글이 있으면
		current = current->prev; // 현재노드는 현재노드의 앞이된다 == 앞의 글로 이동한다
	}// 현재 위치를 이전 노드로 설정 if (current->next != NULL) current = current->next;
	else {// 현재 노드 다음글이 없다면
		if (current->prev != NULL) current = current->prev;  // 현재 위치를 다음 노드로 설정 if (current->prev != NULL) current = current->prev;
		else current = NULL;   // 현재 위치를 설정 안함.(연결리스트에 노드가 없는 경우)
	}

	if (p->next == NULL && p->prev == NULL) {  // 노드가 한개인 경우
		head->next = NULL;
	}
	else if (p->next == NULL && p->prev != NULL) {  // 마지막 노드이면
		p->prev->next = NULL;
	}
	else if (p->prev == NULL && p->next != NULL) {  // 처음 노드이면
		p->next->prev = NULL;
		head->next = p->next;
	}
	else {   // 중간 노드이면
		p->next->prev = p->prev;
		p->prev->next = p->next;
	}
	free(p);

}


//데이터 검색 
void search_node() {          // 데이터 검색
	char name[20];
	printf("검색하고자 하는 도서명을 입력하세요 : ");
	scanf_s("%s", name, sizeof(name));
	getchar();

	BOOK_t* p = head;
	while (p->next != NULL) {
		p = p->next;
		if (!strcmp(p->name, name)) {  // 이름으로 해당 노드 찾기
			current = p;   // 현재 찾은 노드를 현재 노드로 설정
			break;
		}
	}
}

void print_one_node(BOOK_t* data) {    // 하나의 노드만 출력
	if (data != NULL) {
		printf("=======================================================\n");
		printf("\t\t현재 도서\n");
		printf("=======================================================\n");
		printf("%10s [ %s ]\n", "코드", data->code);
		printf("%10s [ %s ]\n", "도서명", data->name);
		printf("%10s [ %s ]\n", "저자", data->author);
		printf("%10s [ %d ]\n", "출판년도", data->year);
		printf("=======================================================\n");
	}
}
// 앞에껄 삭제하는 함수 안지음 