#pragma once
//������ ���α׷����̶� : ����� ����ȭ�Ͽ� �����ϴ� ���� 
//������Ͽ� ����ȭ�� ����� �־� ���ȭ

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//����ü�� ��Ī �ֱ�  => ����� ������Ÿ���� �����.
typedef struct Mem {	// total 62����Ʈ
	char name[20];		// �̸� 20 ����Ʈ
	int age;			// ���� 4 ����Ʈ
	char pn[30];		// phone number 30 ����Ʈ
	struct Mem* next;	// ���� ��带 ��Ī�ϴ� ����ü ������ ���� 8����Ʈ

}NODE_t;

//���Ḯ��Ʈ�� head�� �����͸� �����Ƿ� ���������� �����Ѵ�. 
NODE_t *head;

//���Ḯ��Ʈ�� �ʱ�ȭ�ϱ� ���� ����� ���� �Լ� init_s()
void init_s() {
	head = (NODE_t*)calloc(1, sizeof(NODE_t));
	if (head == NULL) {
		printf("�ܼ����Ḯ��Ʈ�� �������� ���߽��ϴ�.\n");
	}
}

//1 . ������ �߰�(���� �� ���) append
NODE_t* new_node() {//������ ����
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	//struct Mem *data ~
	if (data != NULL) {
		printf("�̸��� �Է��ϼ��� >> ");
		scanf_s("%s", data->name, sizeof(data->name));
		printf("���̸� �Է��ϼ��� >> ");
		scanf_s("%d", &data->age);
		printf("��ȭ��ȣ�� �Է��ϼ��� >> ");
		scanf_s("%s", data->pn, sizeof(data->pn));
	}
	else {
		printf("�Ҵ����!\n");
	}
	return data;
}

void append_node(NODE_t* data) { // ������ ���
	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;	// p�� p->next�� �ѱ��
	}
	p->next = data;		// p->next �濣 ���ڷ� ���� data�� ����Ѵ�.
}
//������ ���Խ� ������ ��ġ�� ����
void insert_node(int position, NODE_t* data) {
	NODE_t* p = head;
	for (int i = 0; i < position; i++) { // ���ϴ� ��ġ�� ã������ for��
		if (p->next != NULL) {//data�� �ִٸ�
			p = p->next;//p���� next�� �ִ� �۾��� postion ��ġ���� �ݺ�
		}
		else { //data�� NULL �� �������̶��
			break;
		}
	}
	data->next = p->next;
	p->next = data;
}

// 3.����
void delete_node() {
	char n1[20];
	printf("�����ϰ��� �ϴ� �̸��� �Է��ϼ��� >> ");
	scanf_s("%s", n1, sizeof(n1));
	printf("%s\n", n1);
	for (int i = 0; i < 20; i++) {
		printf("%c\t", n1[i]);
	}

	
	//fflush(stdin);
	//getchar();//���͹���

	NODE_t* p = head;
	NODE_t* prev = NULL;
	while (p->next != NULL) {
		//printf("Ȯ��3 \t");
		//printf("n1 = %s\n", n1);
		prev = p; // ���� ��� ���� 
		p = p->next; // �����غ��� p->next�� ���� ������ ��ġç���ߴµ� 
		//printf("p->name, prev->next = %s\n", p->name);
		//printf("Ȯ��4 \t"); //Ȯ�� 3-4�� ���ѷ��� p->next�� �����ΰ�? 
		if (!strcmp(p->name, n1)) { //�Է¹��� n1�� p����ü�� name�� ������ 
			//printf("%s", n1);
			prev->next = p->next;
			free(p);
			printf("Ȯ��7 \t");
			break;
		}
	}
}
//4, �˻�
void search_node() {
	char n1[20];
	printf("�˻��ϰ��� �ϴ� �̸��� �Է��ϼ��� >> ");
	scanf_s("%s", n1, sizeof(n1));
	getchar();//���͹���

	NODE_t* p = head;
	while (p->next != NULL) {
		p = p->next;
		if (!strcmp(p->name, n1)) { //�Է¹��� n1�� p����ü�� name�� ������ 
			printf("�̸� [%s], ���� [%d], ��ȭ��ȣ[%s]", p->name, p->age, p->pn);
			getchar();// cls ����
			break;
		}
	}
}

void print_node() { // ���� ��� �����ٶ� 
	printf("======================================================\n");
	NODE_t* p = head; // �ּҹб⸦ ���� *p = head ����
	/* node�� �ּҰ��� head�� �ʱ�ȭ
	* head�� �����ʹ� ���� ��������� ���� �ִ�.
	* data�� ù��° �����͸� �����ϴ� next�� �����͸� �����ؼ� �ִ�.
	* data�� �Լ� new)node���� �����͸� ���������Ƿ� next�ִ�.
	* NULL�� �ƴϹǷ� ���̾ while�� �����Ѵ�.
	*/
	int index = 1;
	while (p->next != NULL) { //******�߿�*************
		//�������̵� p�� ����� �ּҰ��� ������ ������ 
		//head�� next�ּҸ� p->next�´��� node
		p = p->next;
		printf("����[% d],�̸�[% s], ����[% d] ��ȭ��ȣ[% s]\n",index, p->name, p->age, p->pn);//data�� ������ ��� p�� ���
		index++;
	}//while end
	printf("======================================================\n");
}
