/*
�޴� ������� �����ϴ� ����ȯ�� ���α׷��� �ۼ��ϼ���

���⼭ �׸��� �����ϸ� ����޴��� �����ݴϴ�.

0���� �����ϸ� ���� ������ �Է¹޾� ų�� ���� ������ ��ȯ�Ͽ� ������ݴϴ� ��ȯ���� ���� ��ȯ���� ����մϴ�


1. �䱸����
1���� = 1.6093 km
1�Ŀ�� = 0.45359 kg
1���� =  3.7854 ����
1����Ŀ = 0.40468 ��Ÿ��

��ȯ�� ������ �ٽ� ���θ޴��� ���ư��ϴ�.

2.����
���� >> ų�ι��� ��ȯ �Լ��� mile2km()
ų�ι��� >> ���� ��ȯ �Լ��� km2mile()

�Ŀ�� >> ų�α׷� ��ȯ �Լ��� p2kg()
ų�α׷� >> �Ŀ�� ��ȯ �Լ��� kg2p()

���� >> ���� ��ȯ �Լ��� G2L()
���� >> ���� ��ȯ �Լ��� L2G()

����Ŀ >> ��Ÿ�� ��ȯ �Լ��� ak2ht()
��Ÿ�� >> ����Ŀ ��ȯ �Լ��� ht()ak

��� float,double�� ��ȯ�ؾ��� 


4. �ǵ��
���θ޴�>>����޴��� �迭�� �����͸� ����� �� ȿ�������� ������ �� �־� ���� 
�Ƹ� ������ ����ϰ� �ȴٸ� �ǽ����� �ؼ����� �ڿ��� ��û ���Ƹ����ɷ� ����� 
main�� �� �β��� main���� ���̴� ���� ��ǥ�� ���� �ٶ�
*/

#include<stdio.h>
#define MAIN_MENU 5
#define SUB_MENU 2

float mile2km(float a);
float km2mile(float a);

float p2kg(float a);
float kg2p(float a);

float G2L(float a);
float L2G(float a);

float ak2ht(float a);
float ht2ak(float a);

int select_sub1();
int select_sub2();
int select_sub3();
int select_sub4();


int main() {
	// ���⼱ �޴� ����� ������ 
	// �迭 ���θ޴��� �־�ΰ� �����͸� �ִ� ����� �ְ����� ���⼱ ���� ���� 
	int menu,sub;
	float b;
	double key;
	//double b;
	while (1) {
		printf("============���θ޴�=============\n");
		printf("0. ���� ��ȯ\n");
		printf("1. ���� ��ȯ\n");
		printf("2. ���� ��ȯ\n");
		printf("3. ���� ��ȯ\n");
		printf("4. ����\n");
		printf("=================================\n");
		printf(" �޴��� ������ �ּ��� >> ");
		scanf_s("%d", &menu);
		if(menu == 4){
			printf("���Ḧ �����߽��ϴ� �� ����˴ϴ�");
			break;
		}
		else if (menu == 0) {
			sub = select_sub1();
			if (sub == 0) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				mile2km(key);
				//printf("%f ���� = %f ų�ι���\n", key, b);
			}
			else if (sub == 1) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				km2mile(key);
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				continue;
			}
		}
		else if (menu == 1) {
			sub = select_sub2();
			if (sub == 0) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				p2kg(key);
			}
			else if (sub == 1) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				kg2p(key);
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				continue;
			}
		}
		else if (menu == 2) {
			sub = select_sub3();
			if (sub == 0) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				G2L(key);
			}
			else if (sub == 1) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				L2G(key);
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				continue;
			}
		}
		else if (menu == 3) {
			sub = select_sub4();
			if (sub == 0) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				ak2ht(key);
			}
			else if (sub == 1) {
				printf(" ���ڸ� �Է��ϼ��� >> ");
				scanf_s("%lf", &key);
				ht2ak(key);
			}
			else {
				printf("�߸��� �Է��Դϴ�.\n");
				continue;
			}
		}
		else {
			printf("�߸��� �Է��Դϴ�. �ٽý����մϴ�\n");
			continue;
		}



	}

}
float mile2km(float a) {
	float b;
	b = 1.6093 * a;
	printf("%f ���� = %0.5f ų�ι���\n", a, b);
	return b;
}
float km2mile(float a) {
	float b;
	b = 0.6214 * a;
	printf("%lf ų�ι��� = %0.5lf ����\n", a, b);
	return b;
}

float p2kg(float a) {
	float b;
	b = 0.45359 * a;
	printf("%lf �Ŀ�� = %0.5lf ų�α׷�\n", a, b);
	return b;
}
float kg2p(float a) {
	float b;
	b = 2.20463 * a;
	printf("%lf ų�α׷� =  %0.5lf �Ŀ��\n", a, b);
	return b;
}

float G2L(float a) {
	float b;
	b = 3.7854 * a;
	printf("%lf ���� = %0.5lf ����\n", a, b);
	return b;
}
float L2G(float a) {
	float b;
	b = 0.2642 * a;
	printf("%lf ���� = %0.5lf ����\n", a, b);
	return b;
}

float ak2ht(float a) {
	float b;
	b = 0.40468 * a;
	printf("%lf ����Ŀ = %0.5lf ��Ÿ��\n", a, b);
	return b;
}
float ht2ak(float a) {
	float b;
	b = 2.47109 * a;
	printf("%lf ��Ÿ�� =  %0.5lf ����Ŀ\n", a, b);
	return b;
}
int select_sub1() {
	int sub;
	printf("============����޴�=============\n");
	printf("0. ����-->ų�ι���\n");
	printf("1. ų�ι���-->����\n");
	printf("=================================\n");
	printf("���� �޴��� �����ϼ��� >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub2() {
	int sub;
	printf("============����޴�=============\n");
	printf("0. �Ŀ��-->ų�α׷�\n");
	printf("1. ų�α׷�-->�Ŀ��\n");
	printf("=================================\n");
	printf("���� �޴��� �����ϼ��� >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub3() {
	int sub;
	printf("============����޴�=============\n");
	printf("0. ����-->����\n");
	printf("1. ����-->����\n");
	printf("=================================\n");
	printf("���� �޴��� �����ϼ��� >> ");
	scanf_s("%d", &sub);
	return sub;
}
int select_sub4() {
	int sub;
	printf("============����޴�=============\n");
	printf("0. ����Ŀ-->��Ÿ��\n");
	printf("1. ��Ÿ��-->����Ŀ\n");
	printf("=================================\n");
	printf("���� �޴��� �����ϼ��� >> ");
	scanf_s("%d", &sub);
	return sub;
}