/*

���� �䱸������ �ۼ��ϰ� �����Ͻÿ�.
�䱸����
1. ���� ���� ����Ʈ�� �̿��� �������� ���α׷��� Ȱ���Ͽ� ����ȭ���� �����Ͻÿ�. => ���߿��Ḯ��Ʈ
2. ���� �ڷ� ������ �о���ų� �����ϴ� ����� �ۼ��Ͻÿ�. =>������������� �����ѵ� �����Ѵ�.��¹��� txt
3. ���� �ڷḦ ������ �˻� ����� �ۼ��Ͻÿ�. =>.. ??? �̹� �����Ȱ� �ƴѰǰ�?
4. ���� ������ �����ϴ� ����� �ۼ��Ͻÿ�. =>������ �������� ������ ���̳� (�������뵵 �ľ���) �ƴϸ� �Ϻθ� �����ص� �ǵ��� �Ұ��ΰ�.
4-2 => ������ �����ϴ� ������� �����غ���

a. �����̺귯��
<stdio.h>.<stdlib.h>.<string.h>
b.



���� �Լ�
read_book() : ���Ͽ��� �����ڷḦ �о� ���� �Լ�
write_file() : ���߿��Ḯ��Ʈ�� ���Ϸ� ����
update_book() : ���߿��Ḯ��Ʈ�� ���,����,����,�˻�,�޴��� ���� 
������� : bookdll.h
init_dll()
print_one_node() : �ϳ��� ��常 ȭ�鿡 ��� 

3. ���� ����ü 


*/
/*
ȸ������ ���α׷� ����
1) ��� ���̺귯��
- ������� <stdio.h>,<string.h>,<stdlib.h>
- ����� ���� ������� : dll.h
2) ȸ�� ����ü ����
 typedef struct mem{
 char name[20];
 int age;
 char pn[20]
 struct mem *prev; // ���� ���;
 struct mem *next; // ���� ���;
 }NODE_t;
 3) �����Լ�
 init_dll() : ���߿��Ḯ��Ʈ�� head��� ����
 print node(): ���� ����Ʈ ��� ����
 print_one_node(): ��带 �ϳ��� ���
 new_node() : ���ο� ��� ����
 append_node() : ���ο� ��带 ���� ���Ḯ��Ʈ�� �߰�
 insert_node() : ���ο� ��带 ���߿��Ḯ��Ʈ�� ����
 delete_node() : ��� ����
 search_node() : ��� �˻�

 read_book() : ���Ͽ��� �����ڷḦ �о�� ���߿��Ḯ��Ʈ����

write_book() : ���� ���Ḯ��Ʈ�� ���Ϸ� ����

update_book() : ���߿��Ḯ��Ʈ�� ���, ����, ����, �˻� �޹� ����
 */
// ������ ������Ǵ� �޴��� ����ϱ� ���� ����
enum MENU { END, READ, PRINT, MANAGE, OUTPUT };
//������ ��������
enum MENU select; // �ָ޴�

enum SUB { PEND, PREV, NEXT, APPEND, UPDATE, DELETE, SSEARCH };
enum SUB subsel; //����޴�
#include "dll.h" // ***��ó���� ���� ����� ������ ���� (������), ����ġ�� break�� �������� ó�� 


void read_book();	// 1. ���� �ڷ� ���Ϸκ��� �о� ����
void print_now();	// 2. ���� ��Ȳ ����

void update_book(); // 3. ���� ���� �ϱ�
void write_book();	// 4. ���� �ڷ� ���� �ϱ�

char book_name[20] = "book.txt";



int main() {
	BOOK_t* data = NULL;


	init_dll(); // ���߿��Ḯ��Ʈ ���� �� �ʱ�ȭ

	while (head != NULL) {
		
		print_node(); //���� ��ϵ� ȸ�� ��ü ��� 

		printf("1 : ���� �ڷ� �о� ���� \n");
		printf("2 : ���� ��Ȳ ����\n");
		printf("3 : ���� ���� �ϱ�\n");
		printf("4 : ���� �ڷ� ���� �ϱ�\n");
		printf("0 : ����\n");
		printf(">> ");

		scanf_s("%d", &select);
		system("cls");//ȭ�� �����

		if (select == END) { // 0 �Է�������
			break; // Ż��
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
			printf("�߸��� �Է��Դϴ�\n");
			break;
		}
	}
}

void read_book() {//: ���Ͽ��� �����ڷḦ �о�� ���߿��Ḯ��Ʈ����
	printf("====================================================================\n");
	printf("\t���Ͽ��� �����ڷḦ �о�� ���߿��Ḯ��Ʈ����\n");
	printf("====================================================================\n");
}
void print_now() {//: ������Ȳ����
	printf("====================================================================\n");
	printf("\t���� ��Ȳ���� 2���޴�\n");
	printf("====================================================================\n");
}

void update_book() {//���ڸ� �޾ƾ����� �˾Ҵµ� ���������� �׷��� �ȹ޾Ƶ� �ǳ�..
	BOOK_t* data;
	
	
	current = head->next;     // ù��° ������ ���� ȭ�鿡 ���� ������ ���� ������ print_node�� ��ü
	while (head != NULL) {
		if (current != NULL) {
			system("cls");
			print_one_node(current);
		}
		print_node();
		printf("=======================================================\n");
		printf("1 : ���� ���� \n");
		printf("2 : ���� ���� \n");
		printf("3 : ���� ��� \n");
		printf("4 : ���� ���� \n");
		printf("5 : ���� ����\n");
		printf("6 : ���� �˻�\n");
		printf("0 : �� �޴��� ���ư���\n");
		printf(">> ");

		scanf_s("%d", &subsel);
		//{PEND,PREV,NEXT,APPEND,UPDATE,DELETE,SSEARCH};
		if (subsel == PEND) { // 0 �Է�������
			break; // Ż��
		}
		//if (current == NULL) {
			
		//	switch (subsel) {               //  "���", "�ָ޴��� ���ư���"�� ����
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
			//�����۷�
			if (current->prev != NULL) current = current->prev;
			break;

		case NEXT:
			//�����۷�
			if (current->next != NULL) current = current->next;
			break;

		case APPEND:
			//�������
			data = new_node(); // �����͸� �Է¹޾� ����
			if (head->next == NULL) {
				append_node(data);  // ù��� �߰�
			}
			else { 
				insert_node(data); 
			}  // ���ο� ��� ����
			current = data;
			break;

		case UPDATE:
			//���� ���� ������ ����?
			printf(" ���� ���Ÿ� : %s�� �����մϴ�.\n", current->name);
			delete_node();
			data = new_node();
			insert_node(data); // ������ ��ġ��  �����϶� �ǵ� �ǵ���� �ȵɵ�
			// �̷��� �����ϰ� ������ ����� ���� ��忡�����ϴ°� 
			break;
		
		case DELETE:
			delete_node();
			break;

		case SSEARCH:
			search_node();
			break;

		default:
			printf("�߸��� �Է��Դϴ�\n");
			break;
		}
	}
	printf("====================================================================\n");
}

void write_book() {
	printf("====================================================================\n");
	printf("\t�����ڷḦ ���Ϸ� ��� ����4���޴�\n");
	printf("====================================================================\n");
}
		
/*
// ����ġ ����
// current ������ ������ Ȱ�� (�򰥸�)
�����۰� �������� �۵���� 
ó�������� �������� �Ƹ� NULL�� ���ǽ����� ����Ұ����� �����

1,2,4�� �޴�
��� �� ��� �����϶�°��� �� �𸣰��� 
1���� ������ csv���� �е��� �д°ǰ�?

���� �˻� ���� ���� �ǵ���� �ȳ��� �Ƹ� getchar�ϵ� �ϳ� ���������� ����
*/