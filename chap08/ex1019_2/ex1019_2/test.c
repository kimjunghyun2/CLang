#include"test.h"
int main() {
	//���Ḯ��Ʈ ���� �� �ʱ�ȭ(head ����)
	init_s();

	//���ο� �����͸� �Է� �޾� data ����ü�� ����
	NODE_t* d1 = new_node(); //new_node�� ���ϰ��� ������ �ڷ����� ���� ���� 

	//���Ḯ��Ʈ�� ���
	//if (d1 != NULL) {append_node(d1);}

	print_node();
	//for (int i = 0; i < 2; i++) {
		//d1 = new_node();
		//if (d1 != NULL) { append_node(d1); }
	//}
	int key = -1;
	while (1) {
		printf("1 : �߰� 2 : ���� 3 : �˻� 4 : ���� �����Ϸ��� 0�� �������� >>");
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
				printf("���°�� �����ұ��? : ");
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
			printf("�߸��� �Է��Դϴ� �ٽ� �Է����ּ���\n");
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
�ذ���ѹ���
1. ���� �ű�� ���� 1���������� �Ű�����
2. ���� Ư����ġ�� ����
3. �̸����� Ư�� ��ġ �˻� �� ���� 

*/