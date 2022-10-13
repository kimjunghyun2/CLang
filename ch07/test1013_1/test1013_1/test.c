/*
argc = 3
argv[0] = test.exe
argv[1] = 함수
argv[2] = 이름
*/
#include <stdio.h>
int main(int argc, char* argv[]) {
	int i;
	printf("argc = %d \n", argc);
	for (i = 0; i < argc; i++) {
		printf("%d : %s\n", i, argv[i]);
	}
	return 0;
}