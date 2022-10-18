/*
### 헤더 파일 실습 ###
문자를 입력하시오(종료 ctrl+z)
a
a
b
b
^Z
문자열을 입력하시오 : pro gram
pro gram
문자열을 입력하시오 : pro gram
pro
### 헤더 파일 실습 ###
문자를 입력하시오(종료 ctrl+z)
a
a 는 알파벳입니다.
a 는 소문자입니다.
대문자는 A 입니다.
a 는 알파벳 또는 숫자입니다.
a(97) 는 아스키코드입니다.

(10) 는 아스키코드입니다.
^Z

### 헤더 파일 실습 ###
문자열(정수)를 입력하시오 :
123
'123' 문자열의 int형은 123, long형은 123로 변환하였습니다
문자열(실수)를 입력하시오 :
34.56
'34.56' 문자열의 double형은 34.560000 로 변환하였습니다
### 헤더 파일 실습 ###
strlen() : '1234'의 크기는 4 입니다.
strcmp() : 문자열이 동일하지 않습니다.
strncmp() : 문자열이 동일합니다.
strcpy_s() : 복사된 문자열은 cprogram 입니다.
strncpy_s() : 복사된 문자열은 cpro 입니다.
strcat_s() : 연결된 문자열은 c programming 입니다.
strncat_s() : 연결된 문자열은 c programminggram 입니다.
strchr() : 'm' 검색 문자열 : mming
strrchr() : 'm' 검색 문자열 : ming
strstr() : 'pro' 검색 문자열 : programming

*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main() {
	char a;
	char s[20];
	char u[20];
	printf("### <stdio.h>헤더 파일 실습 ###\n");
	while (1) {
		printf("문자를 입력하시오 종료 (ctrl + z) >> ");
		
		a = getchar();
		
		
		if (a == EOF) { break; }
		putchar(a);
		while (getchar() != '\n') {}

		printf("\n");
	}
	printf("문자열을 입력하시오 >> ");
	gets_s(s, 20);
	puts(s);
	printf("\n");
	printf("문자열을 입력하시오 >> ");
	scanf_s("%s", u,(int)sizeof(u));
	puts(u);
	
	printf("\n### <ctype.h>헤더 파일 실습 ###\n");


	char b;

	while (1) {
		printf("문자를 입력하시오 종료 (ctrl + z) >> ");
		while (getchar() != '\n') {}
		b = getchar();


		if (b == EOF) { break; }
		putchar(b);
		if (isalpha(b)) {
			printf("%c 는 알파벳입니다.\n",b);
			printf("%c 는 소문자입니다\n", tolower(b));
			printf("대문자는 %c입니다\n", toupper(b));
		}
		if (isalnum(b)) {
			printf("%c 는 알파벳 또는 숫자입니다.\n", b);
		}
		if (isascii(b)) {
			printf("%c(%d) 는 아스키코드입니다.\n",b, toascii(b));
		}


		printf("\n");



	}
	char c[20];
	char d[20];

	printf("\n### 헤더 파일 실습 ###\n");
	printf("문자열(정수)를 입력하시오 >> ");
	scanf_s("%s", c, (int)sizeof(c));
	printf("%s 문자열의 int형은 %d long형은 %d로 변환하였습니다.\n", c, atoi(c), atol(c));

	printf("\n문자열(실수)를 입력하시오 >> ");
	scanf_s("%s", d, (int)sizeof(d));
	printf("%s 문자열의 double형은 %lf로 변환했습니다.\n", d, atof(d));

	printf("\n### 헤더 파일 실습 ###\n");

	char* e = "1234";
	char* s1 = "cprogram";
	char* s2 = "cproGRAM";
	char s3[20];
	char s4[20];
	char* key1 = "m";
	char* key2 = "pro";
	char* s5 = "cprogramming";


	printf("strlen() : %s의 크기는 %d 입니다.\n",e,(int)strlen(e));
	if (strcmp(s1,s2)) {
		printf("strcmp()  : 문자열이 동일합니다.\n");
	}
	if (strncmp(s1,s2,4)==0) {
		printf("strcmp()  : 문자열이 동일하지 않습니다.\n");
	}
	//printf("strcmp()  : 문자열이 동일하지 않습니다.\n");
	//printf("strncmp() : 문자열은 동일합니다\n");
	strcpy_s(s3, sizeof(s3), s1);
	strncpy_s(s4, sizeof(s4), s2,4);
	printf("strcpy_s() : 복사된 문자열은 %s입니다.\n",s3);
	printf("strncpy_s() : 복사된 문자열은 %s입니다.\n",s4);
	while (getchar() != '\n') {} //엔터방지
	//printf("확인\n");
	//printf("s1 : %s s2 : %s s3 : %s s4 : %s", s1, s2,s3,s4);
	strcat_s(s3,(int)sizeof(s3), s2);// 여기서 예외발생 
	//printf("확인\n");
	strncat_s(s4, (int)sizeof(s4),s2,4);
	// s1이 이미 8칸으로 이미 꽉찬 상태에서 더 이어 붙이려해서 생긴 런타임 에러
	// 20칸인 s3와 s4로 바뀌니 해결 

	
//	printf("확인\n");

	printf("strcat_s() : 연결된 문자열은 %s입니다.\n",s3);
	printf("strncat_s() : 연결된 문자열은 %s 입니다.\n",s4);
	//printf("확인\n");

	printf("strchr() : '%s검색 문자열 : %s \n", key1, strchr(s3, 'm'));
	printf("strnchr() : %s검색 문자열 : %s\n", key1, strrchr(s3, 'm'));
	printf("strstr() : %s검색 문자열 : %s\n", key2, strstr(s3, key2));

	printf("종료");
}