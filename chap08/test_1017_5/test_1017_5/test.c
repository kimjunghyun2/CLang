#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	
	printf("������������� �ǽ� ==============\n");
	char read_c = '\0';
	char write_c = 'A';

	//w,r,a(�߰�)
	fopen_s(&fp, "test2.dat", "a+b");
	if (fp != NULL) {
		printf("���� ���� ��ġ = %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char),1,fp) != 0) {
			printf("�б� ����!! %c\n", read_c);
		}
		printf("���� ���� ��ġ = %d\n", ftell(fp));
		fseek(fp, 3, SEEK_CUR);
		printf("���� ���� ��ġ �̵�= %d\n", ftell(fp));
		if (fwrite(&write_c, sizeof(char),1,fp) != 0) {
			printf("���⼺�� !! %c\n", write_c);
		}
		printf("���� ���� ��ġ = %d\n", ftell(fp));
		fseek(fp, -1, SEEK_END);
		printf("���� ���� ��ġ �̵�= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("�б� ����!! %c\n", read_c);
		}
		fseek(fp, 0, SEEK_END);
		printf("���� ���� ��ġ �̵�= %d\n", ftell(fp));
		if (fwrite(&write_c, sizeof(char), 1, fp) != 0) {
			printf("���⼺�� !! %c\n", write_c);
		}
		fseek(fp, -1, SEEK_END);
		printf("���� ���� ��ġ �̵�= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("�б� ����!! %c\n", read_c);
		}
		fseek(fp, 0, SEEK_SET);
		fseek(fp, -1, SEEK_END);
		printf("���� ���� ��ġ �̵�= %d\n", ftell(fp));
		if (fread(&read_c, sizeof(char), 1, fp) != 0) {
			printf("�б� ����!! %c\n", read_c);
		}
		fclose(fp);
	}
}
