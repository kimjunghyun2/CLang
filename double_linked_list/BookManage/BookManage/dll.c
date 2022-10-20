#pragma once
#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BOOKLIST {
	char code[10];   // �����ڵ�
	char name[20];  // å�̸�
	char author[20]; // ����
	int year;  // ���࿬��
	struct BOOKLIST* prev;   // ���� ��� ���� ������
	struct BOOKLIST* next;   // ���� ��� ���� ������
} BOOK_t;

BOOK_t* head;   // ���� ����Ʈ�� head
BOOK_t* current; // ���� ȭ�鿡 ǥ�õǴ� ���

void init_dll() {                  // head ��� ����
	head = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (head == NULL) {
		printf("���� ���� ����Ʈ�� �������� ���߽��ϴ�!!\n");
		getchar();
	}
}
void print_node() {    // ���� ���� ����Ʈ ��ü ���
	BOOK_t* p = head;
	if (p->next != NULL) {
		printf("=======================================================\n");
		printf("�ڵ�\t������\t\t����\t\t���ǳ⵵\n");
		printf("=======================================================\n");
		do {
			p = p->next;
			printf("[%s]\t%-10s\t%-5s\t\t%5d\n", p->code, p->name, p->author, p->year);
		} while (p->next != NULL);
		printf("=======================================================\n");
	}
	else {
		printf("����� �ڷᰡ �����ϴ�.\n");
	}
}
void print_one_node(BOOK_t* data) {    // �ϳ��� ��常 ���
	if (data != NULL) {
		printf("=======================================================\n");
		printf("%10s [ %s ]\n", "�ڵ�", data->code);
		printf("%10s [ %s ]\n", "������", data->name);
		printf("%10s [ %s ]\n", "����", data->author);
		printf("%10s [ %d ]\n", "���ǳ⵵", data->year);
		printf("=======================================================\n");
	}
}
BOOK_t* new_node() {  // ������ ����
	BOOK_t* data = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (data != NULL) {
		switch (update_select) {
		case INSERT:	// ���� ����� ��쿡�� ���� �ڵ带 �Է¹���.
			printf("���� �ڵ带 �Է��ϼ��� : ");
			scanf_s("%s", data->code, sizeof(data->code));
			//break;
		case MODIFY:  // ���� ������ ��쿡�� ���� �ڵ� �Է¹��� ����
			printf("�������� �Է��ϼ��� : ");
			scanf_s("%s", data->name, sizeof(data->name));
			printf("���� �̸��� �Է��ϼ��� : ");
			scanf_s("%s", data->author, sizeof(data->author));
			printf("���� �⵵�� �Է��ϼ��� : ");
			scanf_s("%d", &data->year);
			break;
		}
	}
	else {
		printf("�޸� �Ҵ� ����!\n");
		getchar();
	}
	return data;
}
void append_node(BOOK_t* data) {   // ������ �߰�
	BOOK_t* p = head;
	while (p->next != NULL)
		p = p->next;
	p->next = data;
	if (p != head) data->prev = p;    // ��尡 �ϳ��� ���� ��쿡�� ���� �ȵ�. ó�� �߰��Ǵ� ����� ��쿡�� NULL
}
void insert_node(BOOK_t* data) {    // ������ ����
	BOOK_t* p = head;
	while (p->next != NULL) {           // ���� ��ġ �������� ����
		p = p->next;
		if (p == current) break;
	}
	if (p == head) {   // ù���� �����ϴ� ���
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
	}
	else if (p->next == NULL) {  // ���������� �����ϴ� ���
		data->prev = p;
		p->next = data;
	}
	else {  // �߰� ���� �����ϴ� ���
		data->next = p->next;
		data->next->prev = data;
		p->next = data;
		data->prev = p;
	}
}
void delete_node() {          // ������ ����

	BOOK_t* p = current;
	if (current->next != NULL) current = current->next;   // ���� ��ġ�� ���� ���� ����
	else {
		if (current->prev != NULL) current = current->prev;  // ���� ��ġ�� ���� ���� ����
		else current = NULL;   // ���� ��ġ�� ���� ����.(���Ḯ��Ʈ�� ��尡 ���� ���)
	}

	if (p->next == NULL && p->prev == NULL) {  // ��尡 �Ѱ��� ���
		head->next = NULL;
	}
	else if (p->next == NULL && p->prev != NULL) {  // ������ ����̸�
		p->prev->next = NULL;
	}
	else if (p->prev == NULL && p->next != NULL) {  // ó�� ����̸�
		p->next->prev = NULL;
		head->next = p->next;
	}
	else {   // �߰� ����̸�
		p->next->prev = p->prev;
		p->prev->next = p->next;
	}
	free(p);

}
void search_node() {          // ������ �˻�
	char name[20];
	printf("�˻��ϰ��� �ϴ� �������� �Է��ϼ��� : ");
	scanf_s("%s", name, sizeof(name));
	getchar();

	BOOK_t* p = head;
	while (p->next != NULL) {
		p = p->next;
		if (!strcmp(p->name, name)) {  // �̸����� �ش� ��� ã��
			current = p;   // ���� ã�� ��带 ���� ���� ����
			break;
		}
	}
}