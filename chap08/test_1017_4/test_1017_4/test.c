
#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	printf("바이너리 숫자 입출력 실습 ==============\n");
	int data = 100;
	fopen_s(&fp, "test.dat", "wb");
	//바이너리 쓰기
	if (fp != NULL) {
		if ((fwrite(&data, sizeof(int), 1, fp) != 0)) {
			printf("쓰기 성공 !! data=%d\n,data");
		}
		fclose(fp);
	}
	//바이너리 읽기
	fopen_s(&fp, "test.dat", "rb");
	if (fp != NULL) {
		if ((fread(&data, sizeof(int), 1, fp) != 0)) {
			printf("읽기 성공 !! data = %d\n", data);
		}
		fclose(fp);
	}
	int arr[3] = { 100,200,300 };
	fopen_s(&fp, "test1.dat", "wb");
	if (fp != NULL) {
		if (fwrite(arr, sizeof(int), 3, fp) != 0) {
			printf("배열쓰기 성공\n");
		}
		fclose(fp);
	}
	int read[3] = { 0 };
	fopen_s(&fp, "test1.dat", "rb");
	if (fp != NULL) {
		if (fread(read, sizeof(int), 3, fp) != 0) {
			printf("배열읽기 성공!! \n");
			for (int i = 0; i < 3; i++) {
				printf("read[%d]=%d\n", i, read[i]);
			}
		}
		fclose(fp);
	}
	//문자를 배열로 입출력하는 파일
	char name[] = "C_PROGRAMMING";
	fopen_s(&fp, "test2.dat", "wb");
	if (fp != NULL) {
		if (fwrite(name, sizeof(char), strlen(name), fp) != 0) {
			printf("배열쓰기성공!! name=%s\n", name);
		}
		fclose(fp);
	}
	char re_name[20];
	fopen_s(&fp, "test2.dat", "rb");
	if (fp != NULL) {
		if (fread(re_name, sizeof(char), strlen(name), fp) != 0) {
			re_name[strlen(name)]='\0';
			printf("배열의 읽기성공!! name=%s\n", re_name);
		}
		fclose(fp);
	}
}
