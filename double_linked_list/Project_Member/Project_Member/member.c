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
 print node(): ���߿��Ḯ��Ʈ�� head��� ����
 new_node() : ���ο� ��� ����
 append_node() : ���ο� ��带 ���� ���Ḯ��Ʈ�� �߰�
 insert_node() : ���ο� ��带 ���߿��Ḯ��Ʈ�� ����
 delete_node() : ��� ����
 search_node() : ��� �˻�
 */
#include "dll.h"
// ������ ������Ǵ� �޴��� ����ϱ� ���� ����
enum MENU {END, APPEND, INSERT, DELETE, SEARCH};
//������ ��������
enum MENU select;

int main() {
	NODE_t* data= NULL;
	int cnt = 1;

	init_dll(); // ���߿��Ḯ��Ʈ ���� �� �ʱ�ȭ

	while (head != NULL) {
		system("cls");//ȭ�� �����
		print_node(); //���� ��ϵ� ȸ�� ��ü ��� 

		printf("1 : ȸ�� ���\n");
		printf("2 : ȸ�� ����\n");
		printf("3 : ȸ�� ����\n");
		printf("4 : ȸ�� �˻�\n");
		printf("0 : ����\n");
		printf(">> ");

		scanf_s("%d", &select); // �޴� �Է� �ޱ� 

		if (select == END) { // 0 �Է�������
			break; // Ż��
		}

		switch (select) {
		
		case APPEND:
			data = new_node(); // �����͸� �Է¹޾� ����
			if (data != NULL) {
				append_node(data); // �� �����͸� �߰�
			}
			break;
		
		case INSERT:
			data = new_node(); // �����͸� �Է¹޾� ����
			if (data != NULL) {
				int po = 0;
				printf("���°�� �����ұ��? >> ");
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
���Կ��� ���ѷ��� �߻� >> ����� �Ѱ� �´µ� �ִ� �̻��� ������ �ѰŶ�� ���ѷ����� ����
�ִ� ������ ������ �������� ������ �Ҽ���?  >> �ǵ���

������ ���� �� �������� �����Ҽ��� ������? 


*/