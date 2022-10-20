

#include"ans.h"
enum MENU { END, APPEND, INSERT, DELETE, SEARCH };
enum MENU select;
int main()
{
	int key; //중단점 체크용
	NODE_t* data = NULL;
	init_s(); // 연결 리스트 생성(head 생성)
	while (head != NULL) { // 연결 리스트가 생성되었으면 반복
		system("cls"); // 화면 지우기
		print_node(); // 연결 리스트 전체 화면 출력
		printf("1 : 데이터 추가\n");
		printf("2 : 데이터 삽입\n");
		printf("3 : 데이터 삭제\n");
		printf("4 : 데이터 검색\n");
		printf("0 : 종료\n");
		printf(">> ");

		scanf_s("%d", &select); // 메뉴선택
		if (select == END) break;
		switch (select) {
		case APPEND: // 추가
			data = new_node(); // 새로운 노드 입력받아서 생성
			if (data != NULL) append_node(data); // 연결 리스트에 추가
			break;
		case INSERT: // 삽입
			data = new_node(); // 새로운 노드 입력받아서 생성
			if (data != NULL) {
				int position = 0;
				printf("몇번째에 삽입할까요? : ");
				scanf_s("%d", &position);
				insert_node(position, data); // 새로운 노드 삽입
			}
			break;
		case DELETE: // 삭제
			delete_node();
			//scanf_s("%d", &key);
			break;
		case SEARCH: // 검색
			search_node();
			//scanf_s("%d",&key);
			break;
		}
	}
}
//삭제에서 무한루프 빠지는 듯? 