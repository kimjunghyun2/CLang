#include<stdio.h>
#include<malloc.h>
#include<string.h>
//�ܼ����Ḯ��Ʈ �� ����ü�� ǥ���ϰ� ��忬���� ����ü �����ͷ�
typedef struct MEMBER {
	char name[20];
	int age;
	struct Member* next; // ����ü ������ ���� next 
}NODE_t;

int main() {
	//���۳��(head)�� �����Ͱ� ����� �ϸ� ������ NULL�� ���� �־�� �Ѵ�.



	NODE_t* head = (NODE_t*)calloc(1, sizeof(NODE_t)); //head ����� �޸� �Ҵ�
	//head����� �޸� �Ҵ��� �Լ��� ����Ÿ���� ������ �̹Ƿ� ��������� ĳ���� ����� ��

	//������ ��� �߰�
	NODE_t* data = (NODE_t*)calloc(1, sizeof(NODE_t));
	head->next = data;
	*data->name = "ȫ�浿";
	//strcpy(data->name,"ȫ�浿");
	// �Ǵ� 
	// strcpy_s(data->name,20, "ȫ�浿"); <<�̰͵� ������ �� 
	//data->name = "ȫ�浿";
	data->age = 100;
}