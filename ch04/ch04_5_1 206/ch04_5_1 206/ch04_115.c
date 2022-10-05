#include<stdio.h>
#include<string.h>
#include<malloc.h>

#define MAX_INPUT 256

int main(void) {
	char input[MAX_INPUT] = { 0 }; //배열 선언 : 데이터타입 배열명[배열크기]={0};
	char* output = NULL; // 포인터변수선언의 초기값은 NULL이고 유효한 값은 아니다.
	int length, ch;

	fgets(input, MAX_INPUT - 1, stdin); //문자열 255를 입력받아 input에 저장 (표준함수)
	//scanf_s()함수는 띄어쓰기가 곧 줄바꿈
	//문자 입력시 마지막은 NULL이 자동으로 입력되어 끝을 알려줌 
	//stdin : 표준입력인 키보드를 의미
	length = strlen(input) + 1; //마지막 NULL을 포함하기 위해 1을 더함
	output = (char*)malloc(length);

	for (ch = 0; ch < length; ch++) {
		if (input[ch] >= 'a' && input[ch] <= 'z')
			output[ch] = input[ch] + 'A' - 'a';
		else
			output[ch] = input[ch];
	}

	printf("input : %s", input);
	printf("output : %s", output);

	free(output);
	return 0;
}