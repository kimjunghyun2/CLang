#include <stdio.h>
int main(int argc, char *argv[]) {
	int i;
	printf("%d개의 명령행 인자가 입력됐습니다. \n", argc);
	for (i = 0; i < argc; i++) {
		printf("%d : %s\n", i, argv[i]);
	}
	return 0;
}