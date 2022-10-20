/*
회원관리 프로그램 개요
1) 사용 라이브러리 
- 헤더파일 <stdio.h>,<string.h>,<stdlib.h>
- 사용자 정의 헤더파일 : dll.h
2) 회원 구조체 구현
 typedef struct mem{
 char name[20];
 int age;
 char pn[20]
 struct mem *prev; // 이전 노드;
 struct mem *next; // 다음 노드;
 }NODE_t;
 3) 구현함수
 init_dll() : 이중연결리스트의 head노드 생성
 print node(): 이중연결리스트의 head노드 생성
 new_node() : 새로운 노드 생성
 append_node() : 새로운 노드를 이중 연결리스트에 추가
 insert_node() : 새로운 노드를 이중연결리스트에 삽입
 delete_node() : 노드 삭제
 search_node() : 노드 검색
 */
#include "dll.h"
// 열거형 상수정의는 메뉴를 사용하기 위해 정의
enum MENU {END, APPEND, INSERT, DELETE, SEARCH};
//열거형 변수선언
enum MENU select;

int main() {
	NODE_t* data= NULL;
	int cnt = 1;

	init_dll(); // 이중연결리스트 생성 및 초기화

	while (head != NULL) {
		system("cls");//화면 지우기
		print_node(); //현재 등록된 회원 전체 출력 

		printf("1 : 회원 등록\n");
		printf("2 : 회원 삽입\n");
		printf("3 : 회원 삭제\n");
		printf("4 : 회원 검색\n");
		printf("0 : 종료\n");
		printf(">> ");

		scanf_s("%d", &select); // 메뉴 입력 받기 

		if (select == END) { // 0 입력했으면
			break; // 탈출
		}

		switch (select) {
		
		case APPEND:
			data = new_node(); // 데이터를 입력받아 생성
			if (data != NULL) {
				append_node(data); // 그 데이터를 추가
			}
			break;
		
		case INSERT:
			data = new_node(); // 데이터를 입력받아 생성
			if (data != NULL) {
				int po = 0;
				printf("몇번째에 삽입할까요? >> ");
				scanf_s("%d", &po);
				insert_node(po, data);
			}
			break;
		
		case DELETE:
			delete_node();

			break;
		
		case SEARCH:
			search_node();
			break;
		
		default:

			break;

		}


	}
}
/*
삽입에서 무한루프 발생 >> 제대로 한건 맞는데 최댓값 이상의 삽입을 한거라면 무한루프가 나옴
최댓값 삽입을 했을때 마지막에 가도록 할수는?  >> 의도됨

수정은 삭제 후 삽입으로 땜빵할수도 있을듯? 


*/