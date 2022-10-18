#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	
	printf("임의접근입출력 실습 ==============\n");
	char read_c = '\0';
	char write_c = 'A';

	//w,r,a(추가)
	fopen_s(&fp, "test2.dat", "a+b");
	if (fp != NULL) {
		printf("현재 접근 위치 = %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char),1,fp) != 0) {
			printf("읽기 성공!! %c\n", read_c);
		}
		printf("현재 접근 위치 = %d\n", ftell(fp));
		fseek(fp, 3, SEEK_CUR);
		printf("현재 접근 위치 이동= %d\n", ftell(fp));
		if (fwrite(&write_c, sizeof(char),1,fp) != 0) {
			printf("쓰기성공 !! %c\n", write_c);
		}
		printf("현재 접근 위치 = %d\n", ftell(fp));
		fseek(fp, -1, SEEK_END);
		printf("현재 접근 위치 이동= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("읽기 성공!! %c\n", read_c);
		}
		fseek(fp, 0, SEEK_END);
		printf("현재 접근 위치 이동= %d\n", ftell(fp));
		if (fwrite(&write_c, sizeof(char), 1, fp) != 0) {
			printf("쓰기성공 !! %c\n", write_c);
		}
		fseek(fp, -1, SEEK_END);
		printf("현재 접근 위치 이동= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("읽기 성공!! %c\n", read_c);
		}
		fseek(fp, 0, SEEK_SET);
		fseek(fp, -1, SEEK_END);
		printf("현재 접근 위치 이동= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("읽기 성공!! %c\n", read_c);
		}
		fclose(fp);
	}
}
