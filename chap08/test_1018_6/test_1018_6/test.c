#include<stdio.h>
//#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main() {
	
	char a;
	int aa = atoi("1234");
	long b = atol("12345");
	double c = atof("12.345");
	printf("a=%d\t b=%d\t a+b=%d\t c=%.3lf\n", aa, b, aa + b, c);
	char* s = "asd fgh";
	printf("s의 갯수 = %d\n", strlen(s));
	char* s1 = "cprogram";
	char* s2 = "cproGReM";
	printf("strcmp(s1,s2) = %d\n", strcmp(s1, s2));
	printf("strncmp(s1,s2,4) = %d\n", strncmp(s1, s2,4));
	char s3[20];
	char* s4 = "cprogrmaing";
	strcpy_s(s3, sizeof(s3), s4);

	printf("%s\n",s3);
	strncpy_s(s3, sizeof(s3), s4,4);
	printf("%s\n", s3);


	while (1) {
		printf("a 입력 >> ");
		a = getchar();
		if (a == EOF) { break; }
		if (isalpha(a)) {
			printf("알파벳입니다.\n");
			printf("upper = %c\n", toupper(a));
			printf("lower = %c\n", tolower(a));
		}
		if (isdigit(a)) {
			printf("숫자입니다.\n");
		}
	}

}