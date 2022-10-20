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

typedef struct mem {
	char name[20];
	int age;
	char pn[20];
	struct mem* prev; // ���� ��� ���� ������;
	struct mem* next; // ���� ��� ���� ������;
}NODE_t;

NODE_t* head; //��������

//���Ḯ��Ʈ ���� �� �ʱ�ȭ �۾� �Լ� init_dll()
void init_dll() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t)); // ������ Ÿ���� NODE_t*�̹Ƿ� calloc(...)�� NODE_t*���� ĳ����
	if (head == NULL) {//���� ���н� 
		printf("���߿��Ḯ��Ʈ�� �������� ���߽��ϴ�\n");
	}
}

void print_node() {
	NODE_t* p = head;
	printf("===============================\n");
	printf("\t\t ȸ�� ���� ���α׷�\n");
	printf("===============================\n");

	if (p->next != NULL) {
		printf("===============================\n");
		printf("����\t �̸�\t ���� \t ��ȭ��ȣ \n");
		printf("===============================\n");

		//�ڷ��� ������ŭ �ݺ�
		int count = 1;
		while (p->next != NULL) {
			p = p->next;
			printf("[%d]\t %s\t %d\t %s\n",count++,p->name,p->age,p->pn);
		}
		printf("===============================\n");
	}
}

//������ ����
NODE_t* new_node() {
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (data != NULL) {
		printf("�̸��� �Է��ϼ��� >>");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("���̸� �Է��ϼ��� >>");
		scanf_s("%d", &data->age, sizeof(data->age)); // age�� ����,�����ͷ� �������� �ʾ���
		printf("��ȭ��ȣ�� �Է��ϼ��� >>");
		scanf_s("%s", data->pn, sizeof(data->pn));
	}
	else {
		printf("�޸� �Ҵ� ����\n");
	}
	return data;
}

//���߿��Ḯ��Ʈ�� ������ �߰�
void append_node(NODE_t* data) {
	NODE_t* p = head;
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
void insert_node(int position, NODE_t* data) {
	NODE_t* p = head;

	for (int i = 0; i < position;i++) {
		if (p->next != NULL) {
			p = p->next;
		}
		else {
			break;
		}

		if (p == head) {//ù��° ��忡 ������ ��� 
			data->next = p->next;
			data->next->prev = data;
			p->next = data;
		}
		else if (p->next == NULL) {//�������� ����
			data->prev = p;
			p->next = data;
		}
		else {//�߰���忡 ����
			data->next = p->next;
			data->next->prev = data;
			p->next = data;
			data->prev = p;
		}
	}
}
//������ ����
void delete_node(){
	char n1[20];
	printf("������ �̸��� �Է��Ͻÿ� >> ");
	scanf_s("%s",n1,sizeof(n1));
	getchar();//���͹���

	NODE_t* p = head;

	while (p->next != NULL) {//�ڷᰡ �ִٸ�
		p = p->next;
		//�ش� ��带 ã�⿡�� ��ġ�� ����� ����
		if (!strcmp(p->name, n1)) {
			//�Ѱ��� ���
			if (p->next == NULL && p->prev == NULL) {// ��尡 head�� node1 �� �ѻ��̸� node1�� next,prev�� ��� NULL�� ���
				head->next = NULL; // �̰�� ������ �����۷� �����ϸ� ȥ���ȴ�.
			}
			else if (p->next == NULL && p->prev != NULL) { // ������ ����̸� (�������� ���� �������� ������)
				p->prev->next = NULL; // p�� �������� �������� NULL�� �ȴ�.
			}
			else if (p->prev == NULL && p->next != NULL) {//ó�� ����̸� (�������� ���µ� �������� ������)
				p->next->prev = NULL; //p�� �������� �������� NULL�� �ȴ� (?)
				head->next = p->next; // head�� �������� p�� �������� �ȴ�.
			}
			else {
				//�߰� ����̸� ����
				p->next->prev = p->prev; // p�� �������� p�� �������� �������� �ȴ�.
				p->prev->next = p->next; //p�� �������� p�� �������� �������� �ȴ�
			}
			free(p);
			break;
		}
	}
}

//������ �˻� 
void search_node() {
	char n1[20];
	printf("�˻��ϰ��� �ϴ� �̸��� �Է��ϼ��� >> ");
	scanf_s("%s", n1, sizeof(n1));
	getchar();

	NODE_t* p = head;
	while (p->next != NULL) { //p�� �����ۿ� �����Ͱ� ������ �ݺ�
		p = p->next;
		if (!strcmp(p->name, n1)) { // p�� �̸��� ����ڰ� �Է��� n1�� �����ϴٸ� 
			//(strcmp�� �����ϸ� 0�� ��ȯ�ϹǷ� !(NOT)�� �ٿ� 1(��)�� �����) 
			printf("�̸� %s\t ���� %d\t ��ȭ��ȣ %s\n", p->name, p->age, p->pn); // �ش� p ����ü ���
			//getchar();//cls ����
		}

	}
}
