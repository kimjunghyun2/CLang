#include"test.h"
int main() {
	//연결리스트 생성 및 초기화(head 생성)
	init_s();

	//새로운 데이터를 입력 받아 data 구조체를 생성
	NODE_t* d1 = new_node(); //new_node의 리턴값도 동일한 자료형의 변수 선언 

	//연결리스트에 등록
	//if (d1 != NULL) {append_node(d1);}

	print_node();
	//for (int i = 0; i < 2; i++) {
		//d1 = new_node();
		//if (d1 != NULL) { append_node(d1); }
	//}
	int key = -1;
	while (1) {
		printf("1 : 추가 2 : 삽입 3 : 검색 4 : 삭제 종료하려면 0을 누르세요 >>");
		scanf_s("%d", &key);
		if (key == 0) {
			break;
		}
		else if (key==1) {
			d1 = new_node();
			if (d1 != NULL) { append_node(d1); }
			print_node();
		}
		else if (key == 2) {
			d1 = new_node();
			if (d1 != NULL) {
				int num = 0;
				printf("몇번째에 삽입할까요? : ");
				scanf_s("%d", &num);
				insert_node(num, d1); 
			}
			print_node();
		}
		else if (key == 3) {
			d1 = new_node();
			if (d1 != NULL) { append_node(d1); }
			print_node();
		}
		else if (key == 4) {
			delete_node(head->next);
			print_node();
		}
		else {
			printf("잘못된 입력입니다 다시 입력해주세요\n");
			print_node();
			continue;
		}
		//print_node();
	}

	//d1 = new_node();
	//if (d1 != NULL) { insert_node(head->next, d1); }
	print_node();

}
/*
해결못한문제
1. 순번 매기기 문제 1번고정으로 매겨진다
2. 삽입 특정위치의 문제
3. 이름으로 특정 위치 검색 및 삭제 

*/