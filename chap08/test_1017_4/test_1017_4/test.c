
#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	printf("���̳ʸ� ���� ����� �ǽ� ==============\n");
	int data = 100;
	fopen_s(&fp, "test.dat", "wb");
	//���̳ʸ� ����
	if (fp != NULL) {
		if ((fwrite(&data, sizeof(int), 1, fp) != 0)) {
			printf("���� ���� !! data=%d\n,data");
		}
		fclose(fp);
	}
	//���̳ʸ� �б�
	fopen_s(&fp, "test.dat", "rb");
	if (fp != NULL) {
		if ((fread(&data, sizeof(int), 1, fp) != 0)) {
			printf("�б� ���� !! data = %d\n", data);
		}
		fclose(fp);
	}
	int arr[3] = { 100,200,300 };
	fopen_s(&fp, "test1.dat", "wb");
	if (fp != NULL) {
		if (fwrite(arr, sizeof(int), 3, fp) != 0) {
			printf("�迭���� ����\n");
		}
		fclose(fp);
	}
	int read[3] = { 0 };
	fopen_s(&fp, "test1.dat", "rb");
	if (fp != NULL) {
		if (fread(read, sizeof(int), 3, fp) != 0) {
			printf("�迭�б� ����!! \n");
			for (int i = 0; i < 3; i++) {
				printf("read[%d]=%d\n", i, read[i]);
			}
		}
		fclose(fp);
	}
	//���ڸ� �迭�� ������ϴ� ����
	char name[] = "C_PROGRAMMING";
	fopen_s(&fp, "test2.dat", "wb");
	if (fp != NULL) {
		if (fwrite(name, sizeof(char), strlen(name), fp) != 0) {
			printf("�迭���⼺��!! name=%s\n", name);
		}
		fclose(fp);
	}
	char re_name[20];
	fopen_s(&fp, "test2.dat", "rb");
	if (fp != NULL) {
		if (fread(re_name, sizeof(char), strlen(name), fp) != 0) {
			re_name[strlen(name)]='\0';
			printf("�迭�� �б⼺��!! name=%s\n", re_name);
		}
		fclose(fp);
	}
}
