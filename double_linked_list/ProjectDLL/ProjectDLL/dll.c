/*

다음 요구내용을 작성하고 실행하시오.
요구사항
1. 이중 연결 리스트를 이용한 도서관리 프로그램을 활용하여 실행화면을 구현하시오. => 이중연결리스트
2. 도서 자료 파일을 읽어오거나 저장하는 기능을 작성하시오. =>파일입출력으로 생성한뒤 저장한다.출력물을 txt
3. 도서 자료를 순차적 검색 기능을 작성하시오. =>.. ??? 이미 구현된게 아닌건가?
4. 도서 정보를 수정하는 기능을 작성하시오. =>삭제와 삽입으로 구현할 것이냐 (같은내용도 쳐야함) 아니면 일부만 수정해도 되도록 할것인가.
4-2 => 파일을 수정하는 방법으로 구현해보자

a. 사용라이브러리
<stdio.h>.<stdlib.h>.<string.h>
b.



구현 함수
read_book() : 파일에서 도서자료를 읽어 오는 함수
write_file() : 이중연결리스트를 파일로 저장
update_book() : 이중연결리스트에 등록,수정,삭제,검색,메뉴를 실행 
헤더파일 : bookdll.h
init_dll()
print_one_node() : 하나의 노드만 화면에 출력 

3. 도서 구조체 


*/
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
 print node(): 도서 리스트 출력 생성
 print_one_node(): 노드를 하나만 출력
 new_node() : 새로운 노드 생성
 append_node() : 새로운 노드를 이중 연결리스트에 추가
 insert_node() : 새로운 노드를 이중연결리스트에 삽입
 delete_node() : 노드 삭제
 search_node() : 노드 검색

 read_book() : 파일에서 도서자료를 읽어와 이중연결리스트생성

write_book() : 이중 연결리스트를 파일로 저장

update_book() : 이중연결리스트에 등록, 수정, 삭제, 검색 메뮤 실행
 */
// 열거형 상수정의는 메뉴를 사용하기 위해 정의
enum MENU { END, READ, PRINT, MANAGE, OUTPUT };
//열거형 변수선언
enum MENU select; // 주메뉴

enum SUB { PEND, PREV, NEXT, APPEND, UPDATE, DELETE, SSEARCH };
enum SUB subsel; //서브메뉴
#include "dll.h" // ***전처리기 전에 선언된 열거형 복습 (몰랐음), 스위치의 break를 안했을때 처리 


void read_book();	// 1. 도서 자료 파일로부터 읽어 오기
void print_now();	// 2. 도서 현황 보기

void update_book(); // 3. 도서 관리 하기
void write_book();	// 4. 도서 자료 저장 하기

char book_name[20] = "book.txt";



int main() {
	BOOK_t* data = NULL;


	init_dll(); // 이중연결리스트 생성 및 초기화

	while (head != NULL) {
		
		print_node(); //현재 등록된 회원 전체 출력 

		printf("1 : 도서 자료 읽어 오기 \n");
		printf("2 : 도서 현황 보기\n");
		printf("3 : 도서 관리 하기\n");
		printf("4 : 도서 자료 저장 하기\n");
		printf("0 : 종료\n");
		printf(">> ");

		scanf_s("%d", &select);
		system("cls");//화면 지우기

		if (select == END) { // 0 입력했으면
			break; // 탈출
		}
		switch (select) {
		case READ:
			read_book();
			break;
		
		case PRINT:
			print_now();
			break;
		
		case MANAGE:
			update_book();
			break;
		
		case OUTPUT:
			write_book();
			break;
		
		default:
			printf("잘못된 입력입니다\n");
			break;
		}
	}
}

void read_book() {//: 파일에서 도서자료를 읽어와 이중연결리스트생성
	printf("====================================================================\n");
	printf("\t파일에서 도서자료를 읽어와 이중연결리스트생성\n");
	printf("====================================================================\n");
}
void print_now() {//: 도서현황보기
	printf("====================================================================\n");
	printf("\t도서 현황보기 2번메뉴\n");
	printf("====================================================================\n");
}

void update_book() {//인자를 받아야할줄 알았는데 전역변수라 그런가 안받아도 되네..
	BOOK_t* data;
	
	
	current = head->next;     // 첫번째 도서를 현재 화면에 보는 도서로 설정 지금은 print_node로 대체
	while (head != NULL) {
		if (current != NULL) {
			system("cls");
			print_one_node(current);
		}
		print_node();
		printf("=======================================================\n");
		printf("1 : 이전 도서 \n");
		printf("2 : 다음 도서 \n");
		printf("3 : 도서 등록 \n");
		printf("4 : 도서 수정 \n");
		printf("5 : 도서 삭제\n");
		printf("6 : 도서 검색\n");
		printf("0 : 주 메뉴로 돌아가기\n");
		printf(">> ");

		scanf_s("%d", &subsel);
		//{PEND,PREV,NEXT,APPEND,UPDATE,DELETE,SSEARCH};
		if (subsel == PEND) { // 0 입력했으면
			break; // 탈출
		}
		//if (current == NULL) {
			
		//	switch (subsel) {               //  "등록", "주메뉴로 돌아가기"는 가능
		//	case PREV:
		//	case NEXT:
		//	case APPEND:
		//	case DELETE:
		//	case SSEARCH:
		//		continue;
		//	}
		//}
			
			//continue;
		
		switch (subsel) {
		case PREV:
			//이전글로
			if (current->prev != NULL) current = current->prev;
			break;

		case NEXT:
			//다음글로
			if (current->next != NULL) current = current->next;
			break;

		case APPEND:
			//도서등록
			data = new_node(); // 데이터를 입력받아 생성
			if (head->next == NULL) {
				append_node(data);  // 첫노드 추가
			}
			else { 
				insert_node(data); 
			}  // 새로운 노드 삽입
			current = data;
			break;

		case UPDATE:
			//도서 수정 삭제후 삽입?
			printf(" 현재 도셔명 : %s를 수정합니다.\n", current->name);
			delete_node();
			data = new_node();
			insert_node(data); // 삭제한 위치에  삽입하란 건데 의도대로 안될듯
			// 이론은 삭제하고 들어오는 노드의 이전 노드에생성하는것 
			break;
		
		case DELETE:
			delete_node();
			break;

		case SSEARCH:
			search_node();
			break;

		default:
			printf("잘못된 입력입니다\n");
			break;
		}
	}
	printf("====================================================================\n");
}

void write_book() {
	printf("====================================================================\n");
	printf("\t도서자료를 파일로 출력 저장4번메뉴\n");
	printf("====================================================================\n");
}
		
/*
// 스위치 변형
// current 포인터 변수의 활용 (헷갈림)
이전글과 다음글의 작동방식 
처음감지와 끝감지는 아마 NULL값 조건식으로 사용할것으로 예상됨

1,2,4번 메뉴
사실 뭘 어떻게 구현하라는건지 잘 모르겠음 
1번은 파일은 csv파일 읽듯이 읽는건가?

도서 검색 도서 수정 의도대로 안나옴 아마 getchar일듯 하나 도서수정은 문제
*/