#pragma once
//구조적 프로그래밍이란 : 기능을 세분화하여 통합하는 구조 
//헤더파일에 세분화된 기능을 넣어 모듈화

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//구조체와 별칭 넣기  => 사용자 데이터타입을 만든다.
typedef struct Mem {	// total 62바이트
	char name[20];		// 이름 20 바이트
	int age;			// 나이 4 바이트
	char pn[30];		// phone number 30 바이트
	struct Mem* next;	// 다음 노드를 지칭하는 구조체 포인터 변수 8바이트

}NODE_t;

//연결리스트의 head는 포인터만 가지므로 전역변수로 선언한다. 
NODE_t *head;

//연결리스트를 초기화하기 위한 사용자 정의 함수 init_s()
void init_s() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (head == NULL) {
		printf("단순연결리스트를 생성하지 못했습니다.\n");
	}
}

//1 . 데이터 추가(생성 후 등록) append
NODE_t* new_node() {//데이터 생성
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	//struct Mem *data ~
	if (data != NULL) {
		printf("이름을 입력하세요 >> ");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("나이를 입력하세요 >> ");
		scanf_s("%d", &data->age);
		printf("전화번호를 입력하세요 >> ");
		scanf_s("%s", data->pn, sizeof(data->pn));
	}
	else {
		printf("할당실패!\n");
	}
	return data;
}

void append_node(NODE_t* data) { // 데이터 등록
	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;	// p에 p->next를 넘기고
	}
	p->next = data;		// p->next 방엔 인자로 들어온 data를 등록한다.
}
//데이터 삽입시 지정된 위치에 삽임
void insert_node(int position, NODE_t* data) {
	NODE_t* p = head;
	for (int i = 0; i < position; i++) { // 원하는 위치를 찾기위한 for문
		if (p->next != NULL) {//data가 있다면
			p = p->next;//p에다 next를 넣는 작업을 postion 위치까지 반복
		}
		else { //data가 NULL 즉 마지막이라면
			break;
		}
	}
	data->next = p->next;
	p->next = data;
}

// 3.삭제
void delete_node() {
	char n1[20];
	printf("삭제하고자 하는 이름을 입력하세요 >> ");
	scanf_s("%s", n1, sizeof(n1));
	printf("%s\n", n1);
	for (int i = 0; i < 20; i++) {
		printf("%c\t", n1[i]);
	}

	
	//fflush(stdin);
	//getchar();//엔터방지

	NODE_t* p = head;
	NODE_t* prev = NULL;
	while (p->next != NULL) {
		//printf("확인3 \t");
		//printf("n1 = %s\n", n1);
		prev = p; // 이전 노드 저장 
		p = p->next; // 생각해보면 p->next가 갈릴 때부터 눈치챌만했는데 
		//printf("p->name, prev->next = %s\n", p->name);
		//printf("확인4 \t"); //확인 3-4가 무한루프 p->next가 문제인게? 
		if (!strcmp(p->name, n1)) { //입력받은 n1과 p구조체의 name이 같으면 
			//printf("%s", n1);
			prev->next = p->next;
			free(p);
			printf("확인7 \t");
			break;
		}
	}
}
//4, 검색
void search_node() {
	char n1[20];
	printf("검색하고자 하는 이름을 입력하세요 >> ");
	scanf_s("%s", n1, sizeof(n1));
	getchar();//엔터방지

	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;
		if (!strcmp(p->name, n1)) { //입력받은 n1과 p구조체의 name이 같으면 
			printf("이름 [%s], 나이 [%d], 전화번호[%s]", p->name, p->age, p->pn);
			getchar();// cls 방지
			break;
		}
	}
}

void print_node() { // 순번 출력 수정바람 
	printf("======================================================\n");
	NODE_t* p = head; // 주소밀기를 위한 *p = head 지정
	/* node의 주소값을 head로 초기화
	* head의 데이터는 없고 다음노드의 값은 있다.
	* data의 첫번째 데이터를 지정하는 next는 데이터를 생성해서 있다.
	* data는 함수 new)node에서 데이터를 생성했으므로 next있다.
	* NULL이 아니므로 참이어서 while를 실행한다.
	*/
	int index = 1;
	while (p->next != NULL) { //******중요*************
		//포인터이동 p는 헤드의 주소값을 가지고 있지만 
		//head의 next주소를 p->next는다음 node
		p = p->next;
		printf("순번[% d],이름[% s], 나이[% d] 전화번호[% s]\n",index, p->name, p->age, p->pn);//data를 못쓰는 대신 p를 사용
		index++;
	}//while end
	printf("======================================================\n");
}
