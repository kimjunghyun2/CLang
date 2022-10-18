#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	char name[15] = "c programming";
	printf("문자열 입출력 실습===========\n");
	fopen_s(&fp, "test1.txt", "wt");
	if (fp != NULL) {
		int ret = fputs(name, fp); //반환값이 정상이면 0이다.
		if (ret == 0) { printf("저장성공! %s\n",name); }
		else { printf("저장실패! %s\n", name); }
	}
	else { printf("파일을 열지 못했습니다\n"); }
	fclose(fp);
	char buf[50]; //문자열 50크기의 배열
	fopen_s(&fp, "test1.txt","rt");
	if (fp != NULL) {
		char* ret = fgets(buf, sizeof(buf), fp);
		if (ret != NULL) {
			printf("읽기성공%s\n", buf);
		}
		else printf("파일끝\n");
	}
}
