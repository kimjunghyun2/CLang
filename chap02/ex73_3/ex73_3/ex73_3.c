/*
 �����м�

 0. ���� 
	���̸� �Է¹ް� ��������� ���� �䰪�� ����Ͻÿ�
	�䰪�� 3000���̸�, �Ϸ� 3���� �Խ��ϴ�.

 1.�غ�
	������ Ÿ�� : �������� = �ʱⰪ;
	int age; // �Է� ���� ���� ����  
	int pay = 21000; // �Ϸ� ������ �䰪 21000

	int yResult; //  ��������� �䰪�� (���� X 365 X �䰪 X 3) ���� ����� ��츦 ������ ������
	int dResult; // ��������� �䰪�� (((����-1)*365+���� ��¥������ �ϼ�)*3 *�䰪 ���� ����  
	���� ��¥������ �ϼ��� 270���̶� ���� 



2.�Է�
	scanf_s("%d",&age);

3.ó��
	dAge = age - 1;				// A�� ��� ���� ���

	dDate = dAge * 365 + oDay;	// (����-1)*365 +270�� A�� ��� �ϼ��� ���� dDate�� ����
	yDate = age * 365;			// B�� ��� ���� �ϼ� ���� * 365��

	dResult = dDate * pay ;		// A�� ��� �Ѿ�
	yResult = yDate * pay ;		// B�� ��� �Ѿ�

	dBill = dResult / 10000;	
	yBill = yResult / 10000;

	dCoin = dResult % 10000;
	yCoin = yResult % 10000;

4. ������ ���ȭ��


	���̸� �Է��� �ּ��� : 30
	���ñ����� �䰪�� 22995�� 0�� �Դϴ�.
	���ñ��� �ϼ��� ģ �䰪�� 22795�� 5000�� �Դϴ�.

*/


#include<stdio.h>
int main() {

	int age;
	int dAge=0;
	int oDay = 270;//���ñ����� �ϼ� 270
	int dDate = 0;
	int yDate;
	int pay = 21000; // �ּҴ��� 1000������ ���
	
	int yResult; // ������ ����
	int dResult; // ���� ���ڱ��� ����

	int yBill, dBill;// 10000�� �̻�
	int yCoin, dCoin;// 1000������

	printf("���̸� �Է����ּ��� : ");
	scanf_s("%d", &age);
	dAge = age - 1;
	yDate = age * 365;
	dDate = dAge * 365 + oDay; // ���ñ����� �ϼ��� ���� ����
	yResult = age * pay * 365;
	dResult = dDate * pay ; 
	
	yBill = yResult / 10000;
	dBill = dResult / 10000;
	yCoin = yResult % 10000;
	dCoin = dResult % 10000;



	printf("���ñ����� �䰪�� %d�� %d�� �Դϴ�.\n",yBill,yCoin);
	printf("���ñ��� �ϼ��� ģ �䰪�� %d�� %d�� �Դϴ�.\n\n",dBill,dCoin);

	printf("age = %d\t dAge = %d\n", age, dAge);
	printf("ydate = %d\t dDate = %d\n", yDate, dDate);
	printf("yResult = %d\t dResult = %d\n", yResult, dResult);
	return 0;
}