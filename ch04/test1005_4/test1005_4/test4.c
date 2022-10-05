/*
a = good
b = good
c = good
d = good~儆儆儆儆儆?ood
문자열 입력 = abcdef
입력된 문자 = abcdef
입력받은 문자의 개수 = 6
거꾸로 출력 = fedcba

*/
#include<stdio.h>
#include<string.h>
int main() {
	char a[5] = "good";
	char b[5] = { 'g','o','o','d','\0' };
	char c[5];
	c[0] = 'g';
	c[1] = 'o';
	c[2] = 'o';
	c[3] = 'd';
	c[4] = '\0';
	//c = 'good': 오류발생
	char d[5] = "good~"; // 배열의 크기를 넘었으므로 오류발생
	//형식 지정 문자 (서식문자) : %d(정수형),%f,%c,%s,%p,%x
	
	printf("a=%s\n", a);
	printf("b=%s\n", b);
	printf("c=%s\n", c);
	printf("d=%s\n", d);

	//입력받은 문자열 출력
	char pop[10];
	printf("문자열 입력 : ");
	scanf_s("%s", pop, sizeof(pop));
	printf("입력된 문자열 : %s\n", pop);


	return 0;
	
}