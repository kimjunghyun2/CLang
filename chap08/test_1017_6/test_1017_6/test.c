/*1)���� ȭ��� ���� data.txt������ ���α׷����� �ۼ��Ͻÿ�.2) data.txt������ �о out.txt�� ���⸦ �ϴ� ���α׷��� �ۼ��Ͻÿ�data.txt���屺 45 3.2�ֿ��� 32 4.1����� 21 3.5out.txt==========================================����        ����     ����     ȯ��(100��)==========================================���屺      45        3.2        64�ֿ���      32        4.1        82�����      21        3.5        70==========================================
1.�����м�
- ��������� ���
- ����ü ���ǿ� ����ü���� ���� �迭����
- wt���� ������ data.txt
- rt���� �б� data.txt

- wt ���ϻ����� out.txt�Ѵ�.
- ȯ�������� ���� *20�̴�.

2. ����
- �Է¼���: �迭�� �����͸� �̿��Ͽ� fprintf()�̿�
- ó������: ���� ���
- ��¼���:	
*/
#include<stdio.h>

#define MAX 3

FILE* ip; // �Է�

FILE* op; // ���

struct MEM {
	char name[10];
	int age;
	double jumsu;

}data[MAX];
int main() {
	//data.txt ���� ����
	printf("data.txt������ �����մϴ�.\n");
	fopen_s(&op, "data.txt", "wt");
	if (op != NULL) {
		fprintf(op, "%5s %5d %5.1lf\n", "���屺", 45, 3.2);
		fprintf(op, "%5s %5d %5.1lf\n", "�ֿ���", 32, 4.1);
		fprintf(op, "%5s %5d %5.1lf\n", "�����", 21, 3.5);
		fclose(op);
	}
	else {
		printf("������ �������� �� �߽��ϴ�.\n");

	}
		//data.txt ���� �о ����ü �迭�� ����

		printf("data.txt ���� �о ����ü �迭�� ����\n");
		fopen_s(&ip, "data.txt", "rt");

	if (ip != NULL) {

		for (int i = 0; i < MAX; i++) {
			if (fscanf_s(ip, "%s %d %lf", data[i].name, sizeof(data[i].name), &data[i].age, &data[i].jumsu) != 0) {

				printf("%5s %5d %5.1lf\n", data[i].name, data[i].age, data[i].jumsu);
			}
		}
		fclose(ip);
	}
	else {
		printf("data.txt ������ ���� �� �߽��ϴ�.\n");

	}
		// out.txt������ �����ϱ�

		printf("out.txt������ �����ϱ�\n");
	fopen_s(&op, "out.txt", "wt");
	if (op != NULL) {
		fprintf(op, "==================================\n");
		fprintf(op, "����\t����\t����\tȯ��(100��)\n");
		fprintf(op, "=================================\n");
		for (int i = 0; i < MAX; i++) {
			int val = data[i].jumsu * 20;
			fprintf(op, "%s\t%d\t%.1lf\t%d\n", data[i].name, data[i].age, data[i].jumsu, val);
		}
		fprintf(op, "=================================\n");
		fclose(op);
	}
	else { printf("out.txt �������� �� �߽��ϴ�."); }
}