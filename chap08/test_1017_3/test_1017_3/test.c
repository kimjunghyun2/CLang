#include<stdio.h>
#include<string.h>

FILE* fp;
char buf[50];
int main() {
	printf("형식지정 입출력 실습===========\n");
	char data[20] = "C_PROGRAMMING";
	//파일입출력: fopen_s(주소값, "파일명","모드 wt,rt")
	fopen_s(&fp, "test2.txt", "wt");
	if (fp != NULL) {
		int ret = fprintf(fp, " %d %d %s", 100, 200, data);
		if (ret != EOF) {
			printf("저장성공! %d,%d,%s\n", 100, 200, data);
		}
		else {
			printf("저장실패! ret=%d\n", ret);
		}
		fclose(fp);
	}
	else { printf("파일을 열지 못했습니다\n"); }

	//read모드를 사용하여 파일읽기
	fopen_s(&fp, "test2.txt", "rt");
	int input[2]; // 0 1 2
	if (fp != NULL) {
		for (int i = 0; i < 2; i++) {
			int ret = fscanf_s(fp, "%d", &input[i]);
			if (ret != EOF) {
				printf("읽기 성공 ! input[%d]=%d\n", i, input[i]);
			}
		}
		int ret = fscanf_s(fp, "%s", buf, sizeof(buf));
		if (ret != EOF) {
			printf("읽기성공 ! %s\n", buf);
		}
		else { printf("읽기 실패\n"); }
		fclose(fp);
	}
	else { printf("파일을 열지 못했습니다\n"); }

}
