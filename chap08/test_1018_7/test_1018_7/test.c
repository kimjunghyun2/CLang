/*
### ��� ���� �ǽ� ###
���ڸ� �Է��Ͻÿ�(���� ctrl+z)
a
a
b
b
^Z
���ڿ��� �Է��Ͻÿ� : pro gram
pro gram
���ڿ��� �Է��Ͻÿ� : pro gram
pro
### ��� ���� �ǽ� ###
���ڸ� �Է��Ͻÿ�(���� ctrl+z)
a
a �� ���ĺ��Դϴ�.
a �� �ҹ����Դϴ�.
�빮�ڴ� A �Դϴ�.
a �� ���ĺ� �Ǵ� �����Դϴ�.
a(97) �� �ƽ�Ű�ڵ��Դϴ�.

(10) �� �ƽ�Ű�ڵ��Դϴ�.
^Z

### ��� ���� �ǽ� ###
���ڿ�(����)�� �Է��Ͻÿ� :
123
'123' ���ڿ��� int���� 123, long���� 123�� ��ȯ�Ͽ����ϴ�
���ڿ�(�Ǽ�)�� �Է��Ͻÿ� :
34.56
'34.56' ���ڿ��� double���� 34.560000 �� ��ȯ�Ͽ����ϴ�
### ��� ���� �ǽ� ###
strlen() : '1234'�� ũ��� 4 �Դϴ�.
strcmp() : ���ڿ��� �������� �ʽ��ϴ�.
strncmp() : ���ڿ��� �����մϴ�.
strcpy_s() : ����� ���ڿ��� cprogram �Դϴ�.
strncpy_s() : ����� ���ڿ��� cpro �Դϴ�.
strcat_s() : ����� ���ڿ��� c programming �Դϴ�.
strncat_s() : ����� ���ڿ��� c programminggram �Դϴ�.
strchr() : 'm' �˻� ���ڿ� : mming
strrchr() : 'm' �˻� ���ڿ� : ming
strstr() : 'pro' �˻� ���ڿ� : programming

*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char a;
	char s[20];
	char u[20];
	printf("### <stdio.h>��� ���� �ǽ� ###\n");
	while (1) {
		printf("���ڸ� �Է��Ͻÿ� ���� (ctrl + z) >> ");
		
		a = getchar();
		
		
		if (a == EOF) { break; }
		putchar(a);
		while (getchar() != '\n') {}

		printf("\n");
	}
	printf("���ڿ��� �Է��Ͻÿ� >> ");
	gets_s(s, 20);
	puts(s);
	printf("\n");
	printf("���ڿ��� �Է��Ͻÿ� >> ");
	scanf_s("%s", u,(int)sizeof(u));
	puts(u);
	
	printf("\n### <ctype.h>��� ���� �ǽ� ###\n");


	char b;

	while (1) {
		printf("���ڸ� �Է��Ͻÿ� ���� (ctrl + z) >> ");
		while (getchar() != '\n') {}
		b = getchar();


		if (b == EOF) { break; }
		putchar(b);
		if (isalpha(b)) {
			printf("%c �� ���ĺ��Դϴ�.\n",b);
			printf("%c �� �ҹ����Դϴ�\n", tolower(b));
			printf("�빮�ڴ� %c�Դϴ�\n", toupper(b));
		}
		if (isalnum(b)) {
			printf("%c �� ���ĺ� �Ǵ� �����Դϴ�.\n", b);
		}
		if (isascii(b)) {
			printf("%c(%d) �� �ƽ�Ű�ڵ��Դϴ�.\n",b, toascii(b));
		}


		printf("\n");



	}
	char c[20];
	char d[20];

	printf("\n### ��� ���� �ǽ� ###\n");
	printf("���ڿ�(����)�� �Է��Ͻÿ� >> ");
	scanf_s("%s", c, (int)sizeof(c));
	printf("%s ���ڿ��� int���� %d long���� %d�� ��ȯ�Ͽ����ϴ�.\n", c, atoi(c), atol(c));

	printf("\n���ڿ�(�Ǽ�)�� �Է��Ͻÿ� >> ");
	scanf_s("%s", d, (int)sizeof(d));
	printf("%s ���ڿ��� double���� %lf�� ��ȯ�߽��ϴ�.\n", d, atof(d));

	printf("\n### ��� ���� �ǽ� ###\n");

	char* e = "1234";
	char* s1 = "cprogram";
	char* s2 = "cproGRAM";
	char s3[20];
	char s4[20];
	char* key1 = "m";
	char* key2 = "pro";
	char* s5 = "cprogramming";


	printf("strlen() : %s�� ũ��� %d �Դϴ�.\n",e,(int)strlen(e));
	if (strcmp(s1,s2)) {
		printf("strcmp()  : ���ڿ��� �����մϴ�.\n");
	}
	if (strncmp(s1,s2,4)==0) {
		printf("strcmp()  : ���ڿ��� �������� �ʽ��ϴ�.\n");
	}
	//printf("strcmp()  : ���ڿ��� �������� �ʽ��ϴ�.\n");
	//printf("strncmp() : ���ڿ��� �����մϴ�\n");
	strcpy_s(s3, sizeof(s3), s1);
	strncpy_s(s4, sizeof(s4), s2,4);
	printf("strcpy_s() : ����� ���ڿ��� %s�Դϴ�.\n",s3);
	printf("strncpy_s() : ����� ���ڿ��� %s�Դϴ�.\n",s4);
	while (getchar() != '\n') {} //���͹���
	//printf("Ȯ��\n");
	//printf("s1 : %s s2 : %s s3 : %s s4 : %s", s1, s2,s3,s4);
	strcat_s(s3,(int)sizeof(s3), s2);// ���⼭ ���ܹ߻� 
	//printf("Ȯ��\n");
	strncat_s(s4, (int)sizeof(s4),s2,4);
	// s1�� �̹� 8ĭ���� �̹� ���� ���¿��� �� �̾� ���̷��ؼ� ���� ��Ÿ�� ����
	// 20ĭ�� s3�� s4�� �ٲ�� �ذ� 

	
//	printf("Ȯ��\n");

	printf("strcat_s() : ����� ���ڿ��� %s�Դϴ�.\n",s3);
	printf("strncat_s() : ����� ���ڿ��� %s �Դϴ�.\n",s4);
	//printf("Ȯ��\n");

	printf("strchr() : '%s�˻� ���ڿ� : %s \n", key1, strchr(s3, 'm'));
	printf("strnchr() : %s�˻� ���ڿ� : %s\n", key1, strrchr(s3, 'm'));
	printf("strstr() : %s�˻� ���ڿ� : %s\n", key2, strstr(s3, key2));

	printf("����");
}