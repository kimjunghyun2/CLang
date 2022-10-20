#pragma once
//����ü,���ڿ�, �������,
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>

typedef struct Member {

	char name[20];
	int age;
	char pn[20];
	struct Member* next;
}NODE_t;

//ù��° ��� ��������
NODE_t* head;

//���Ḯ��Ʈ�� ���� �����۵��ϴ� �Լ��� ���� 
void init_s() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t));

	if (head == NULL) {
		printf("�ܼ����Ḯ��Ʈ�� �������� ���߽��ϴ�\n");
	}
	else {
		printf("�ܼ����Ḯ��Ʈ�� �����߽��ϴ�\n");
	}
}
//���Ḯ��Ʈ ���� �� ���� �����͸� ����� �Լ����� ����
NODE_t* new_node() { //����Ÿ���� NODE_t����ü
	NODE_t *data = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (data != NULL) { //data�� �ʱⰪ�� ������
		printf("�̸��� �Է��ϼ��� >> ");
		scanf_s("%s", &data->name, sizeof(data->name)); // ���⼭ �� &�� ��� �۵��Ǵ��� �˾ƺ���
		printf("������ �Է��ϼ��� >> ");
		scanf_s("%d", &data->age, sizeof(data->age)); // ����� �ȳ���.. 
		printf("��ȭ��ȣ�� �Է��ϼ��� >> ");
		scanf_s("%s", &data->pn, sizeof(data->pn));
	}// �� �����͸� �Է¹޾� ��������
	else {
		printf("������ �޸� �Ҵ� ����! \n");
	}
	printf("���ο� �����͸� �����Ͽ����ϴ�.[%s],[%d],[%s]\n",data->name,data->age,data->pn);
	//�Լ��� ����Ÿ���� ����ü NODE_t* data
	return data;
}
//����Լ� ����,����
void print_node() { // ���� ��� �����ٶ� 
	printf("======================================================\n");
	NODE_t* p = head; // �ּҹб⸦ ���� *p = head ����
	/* node�� �ּҰ��� head�� �ʱ�ȭ
	* head�� �����ʹ� ���� ��������� ���� �ִ�. 
	* data�� ù��° �����͸� �����ϴ� next�� �����͸� �����ؼ� �ִ�.
	* data�� �Լ� new)node���� �����͸� ���������Ƿ� next�ִ�.
	* NULL�� �ƴϹǷ� ���̾ while�� �����Ѵ�.
	*/
	while (p->next != NULL) { //******�߿�*************
		//�������̵� p�� ����� �ּҰ��� ������ ������ 
		//head�� next�ּҸ� p->next�´��� node
		
		p = p->next;
		printf("����[%d], �̸�[%s], ����[%d] ��ȭ��ȣ[%s]\n",p->name,p->age,p->pn );//data�� ������ ��� p�� ���
	}//while end
	printf("======================================================\n");
}

//�����͸� �Է��ϸ� ���Ḯ��Ʈ�� ����ؾ���(�߰�,append)
/* ���� => ���� ����
*  �߰� => ������ ������ ���� �� 
*  ���� => �߰��� �� �� ����
*/
void append_node(NODE_t* d2) {
	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;
	} 
	p->next = d2;
	printf("���ο� �����͸� �����Ͽ����ϴ�.[%s],[%d],[%s]\n",d2->name, d2->age,d2->pn);
}

//������ �߰� ���� �ϴ� �Լ� ����
void insert_node(NODE_t* prev, NODE_t* d3) {
	d3->next = prev->next;
	prev->next = d3;
	printf("�����͸� �����߽��ϴ�.[%s],[%d],[%s]\n",d3->name, d3->age,d3->pn);
}
//������ ���� �Լ� ���� => �Ű������� �����ͷ� ����
void delete_node(NODE_t* d4) {
	NODE_t* p = head;
	while (p->next != d4) {// ���� �������� ��带 ã�´�.
		p = p->next;
	} 
	if (p != NULL) {
		p->next = d4->next;
		printf("�����͸� �����߽��ϴ�.[%s],[%d],[%s]\n", d4->name, d4->age,d4->pn);
		free(d4);
	}
}

