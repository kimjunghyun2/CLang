#include<stdio.h>

#define MAX 10

int main() {
	int a = 0;
#if MAX>10 //���ǽĸ� ���⼱ ��ɹ����� �ν��� ����
	{a=MAX;}
#else 
	{a=5;}
#endif
	printf("a = %d\n", a);
}