#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	char name[15] = "c programming";
	printf("���ڿ� ����� �ǽ�===========\n");
	fopen_s(&fp, "test1.txt", "wt");
	if (fp != NULL) {
		int ret = fputs(name, fp); //��ȯ���� �����̸� 0�̴�.
		if (ret == 0) { printf("���强��! %s\n",name); }
		else { printf("�������! %s\n", name); }
	}
	else { printf("������ ���� ���߽��ϴ�\n"); }
	fclose(fp);
	char buf[50]; //���ڿ� 50ũ���� �迭
	fopen_s(&fp, "test1.txt","rt");
	if (fp != NULL) {
		char* ret = fgets(buf, sizeof(buf), fp);
		if (ret != NULL) {
			printf("�б⼺��%s\n", buf);
		}
		else printf("���ϳ�\n");
	}
}
