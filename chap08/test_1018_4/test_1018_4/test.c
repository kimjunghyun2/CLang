/*
 ###��� ���� �ǽ�###
hap() 30 + 40 = 70
###��ũ�� �ǽ�###
a = 100
add(20) = 30
sub(20, 10) = 10
add(20) = 40
###���� ������ �ǽ�###
#if before size = 0
#if after size = 5
#ifdef after size = 10
*/
#include<stdio.h> // ǥ�� ���
#include"test.h"  // ����� ���� ���

#define OUT printf("a=%d\n",a); 
#define add(a) a+10				//��ũ�� �Լ� ����
#define sub(a,b) (a)-(b)		//��ũ�� �Լ� ����

//���� ������ ����
#ifndef MAX			//MAX�� ������ �� 
#define MAX 10		// MAX ����
#endif


int main(){
	printf("### ������� �ǽ� ###\n");
	if (SIZE > 10) {
		printf("hap() %d + %d = %d\n", 10, 20, hap(10, 20));
	}
	else {
		printf("hap() %d + %d = %d\n", 10, 20, hap(30, 40));
	}
	int add = hap(30,40);

	printf("\n### ��ũ�� �ǽ� ###\n");
	int a = 100;
	OUT;
	printf("add(%d) - %d\n", 20, add(20));				//��ũ�� �Լ� ȣ��
	printf("sub(%d,%d) = %d\n", 30, 40, hap(30, 40));	//��ũ�� �Լ� ȣ��

#undef add //��ũ�� ���
#define add(a) a+20
	printf("add(%d) = #d\n",20,add(20));
	printf("\n### ���ǽ� �ǽ� ###\n");

	int size = 0;
	printf("#if before SIZE = %d", 0);
#if MAX <10 // ���� �����ϸ����� MAX<10�� �����̹Ƿ� else�� ����
	size = MAX;
#else
	size = 5;
#endif
	printf("#id after size = %d\n", size);

#ifdef MAX // ��ũ�� MAX�� ������ �� 
	size = MAX;
#else
	size = 5;
#endif
	printf("#id after size = %d\n", size);
}
