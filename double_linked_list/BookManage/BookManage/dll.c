#pragma once
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BOOKLIST {
	char code[10];   // 도서코드
	char name[20];  // 책이름
	char author[20]; // 저자
	int year;  // 발행연도
	struct BOOKLIST* prev;   // 이전 노드 연결 포인터
	struct BOOKLIST* next;   // 다음 노드 연결 포인터
} BOOK_t;

BOOK_t* head;   // 연결 리스트의 head
BOOK_t* current; // 현재 화면에 표시되는 노드

void init_dll() {                  // head 노드 생성
	head = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (head == NULL) {
		printf("이중 연결 리스트를 생성하지 못했습니다!!\n");
		getchar();
	}
}
void print_node() {    // 이중 연결 리스트 전체 출력
	BOOK_t* p = head;
	if (p->next != NULL) {
		printf("=======================================================\n");
		printf("코드\t도서명\t\t저자\t\t출판년도\n");
		printf("=======================================================\n");
		do {
			p = p->next;
			printf("[%s]\t%-10s\t%-5s\t\t%5d\n", p->code, p->name, p->author, p->year);
		} while (p->next != NULL);
		printf("=======================================================\n");
	}
	else {
		printf("출력할 자료가 없습니다.\n");
	}
}
void print_one_node(BOOK_t* data) {    // 하나의 노드만 출력
	if (data != NULL) {
		printf("=======================================================\n");
		printf("%10s [ %s ]\n", "코드", data->code);
		printf("%10s [ %s ]\n", "도서명", data->name);
		printf("%10s [ %s ]\n", "저자", data->author);
		printf("%10s [ %d ]\n", "출판년도", data->year);
		printf("=======================================================\n");
	}
}
BOOK_t* new_node() {  // 데이터 생성
	BOOK_t* data = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (data != NULL) {
		switch (update_select) {
		case INSERT:	// 도서 등록인 경우에만 도서 코드를 입력받음.
			printf("도서 코드를 입력하세요 : ");
			scanf_s("%s", data->code, sizeof(data->code));
			//break;
		case MODIFY:  // 도서 수정인 경우에는 도서 코드 입력받지 않음
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
		printf("메모리 할당 실패!\n");
		getchar();
	}
	return data;
}
void append_node(BOOK_t* data) {   // 데이터 추가
	BOOK_t* p = head;
	while (p->next != NULL)
		p = p->next;
	p->next = data;
	if (p != head) data->prev = p;    // 노드가 하나도 없을 경우에는 실행 안됨. 처음 추가되는 노드인 경우에는 NULL
}
void insert_node(BOOK_t* data) {    // 데이터 삽입
	BOOK_t* p = head;
	while (p->next != NULL) {           // 현재 위치 다음으로 삽입
		p = p->next;
		if (p == current) break;
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
void delete_node() {          // 데이터 삭제

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