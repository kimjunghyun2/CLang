/*
init_dll() : ���߿��Ḯ��Ʈ�� head��� ����
 print node(): ���߿��Ḯ��Ʈ�� head��� ����
 new_node() : ���ο� ��� ����
 append_node() : ���ο� ��带 ���� ���Ḯ��Ʈ�� �߰�
 insert_node() : ���ο� ��带 ���߿��Ḯ��Ʈ�� ����
 delete_node() : ��� ����
 search_node() : ��� �˻�
*/
#pragma once
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct BOOKLIST {
	char code[10];			//�����ڵ�
	char name[20];			//å�̸�
	char author[20];		//����
	int year;				//���࿬��
	struct BOOKLIST* prev;	// ���� ��� ���� ������;
	struct BOOKLIST* next;	// ���� ��� ���� ������;
}BOOK_t;

BOOK_t* head; //��������
BOOK_t* current; //��������

//���Ḯ��Ʈ ���� �� �ʱ�ȭ �۾� �Լ� init_dll()
void init_dll() {
	head = (BOOK_t*)calloc(1, sizeof(BOOK_t)); // ������ Ÿ���� BOOK_t*�̹Ƿ� calloc(...)�� BOOK_t*���� ĳ����
	if (head == NULL) {//���� ���н� 
		printf("���߿��Ḯ��Ʈ�� �������� ���߽��ϴ�\n");
	}
}

void print_node() {
	BOOK_t* p = head;
	printf("=======================================================\n");
	printf("\t\t ���� ���� ���\n");
	printf("=======================================================\n");

	if (p->next != NULL) {
		printf("=======================================================\n");
		printf("����\t �����ڵ�\t å�̸�\t ���� \t ���࿬��\t  \n");
		printf("=======================================================\n");

		//�ڷ��� ������ŭ �ݺ�
		int count = 1;
		while (p->next != NULL) {
			p = p->next;
			printf("[%d]\t %s\t\t %s\t %s\t %d\n", count++, p->code, p->name, p->author,p->year);
		}
		printf("=======================================================\n");
	}
}

//������ ����
BOOK_t* new_node() {
	BOOK_t* data = (BOOK_t*)calloc(1, sizeof(BOOK_t));
	if (data != NULL) {
		switch (subsel) {
		case APPEND:
		case UPDATE:  // �����ϰ� �����̱� ������ ���� �Է¹���
			printf("�����ڵ带 �Է��ϼ��� >>");
			scanf_s("%s", data->code, sizeof(data->code));		
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
		printf("�޸� �Ҵ� ����\n");
	}
	return data;
}

//���߿��Ḯ��Ʈ�� ������ �߰�
void append_node(BOOK_t* data) {
	BOOK_t* p = head;
	while (p->next != NULL) {
		p = p->next;
	}
	p->next = data;
	// ��尡 ���� ��� ������ ���� �ʴ´�.
	// ó������ �߰��Ǵ� ���  prev�� NULL������
	if (p != head) {
		data->prev = p;
	}
}
//���߿��Ḯ��Ʈ�� ���� 
void insert_node(BOOK_t* data) {    // ������ ����
	BOOK_t* p = head;
	while (p->next != NULL) {           // ���� ��ġ �������� ����
		p = p->next; 
		if (p == current) {
			break;
		} 
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
//������ ����
void delete_node() {
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
void prevIns_node() {
	//�����ϰ� �ɽ� ���԰� ���� ����� �����ϳ� ���� ����� ������ �ƴ� ������ �տ� ���Ե� 
	//�տ��� �����ϰ� insert_node�� ������ ������ 
	// ���� ��尡 ����ϰ�� =>��������
	// 
	BOOK_t* p = current;
	if (current->next != NULL) { //������ ���� ���� ������
		current = current->prev; // ������� �������� ���̵ȴ� == ���� �۷� �̵��Ѵ�
	}// ���� ��ġ�� ���� ���� ���� if (current->next != NULL) current = current->next;
	else {// ���� ��� �������� ���ٸ�
		if (current->prev != NULL) current = current->prev;  // ���� ��ġ�� ���� ���� ���� if (current->prev != NULL) current = current->prev;
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


//������ �˻� 
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

void print_one_node(BOOK_t* data) {    // �ϳ��� ��常 ���
	if (data != NULL) {
		printf("=======================================================\n");
		printf("\t\t���� ����\n");
		printf("=======================================================\n");
		printf("%10s [ %s ]\n", "�ڵ�", data->code);
		printf("%10s [ %s ]\n", "������", data->name);
		printf("%10s [ %s ]\n", "����", data->author);
		printf("%10s [ %d ]\n", "���ǳ⵵", data->year);
		printf("=======================================================\n");
	}
}
// �տ��� �����ϴ� �Լ� ������ 