#include<stdio.h>
#include<string.h>

FILE* fp;
char buf[50];
int main() {
	printf("�������� ����� �ǽ�===========\n");
	char data[20] = "C_PROGRAMMING";
	//���������: fopen_s(�ּҰ�, "���ϸ�","��� wt,rt")
	fopen_s(&fp, "test2.txt", "wt");
	if (fp != NULL) {
		int ret = fprintf(fp, " %d %d %s", 100, 200, data);
		if (ret != EOF) {
			printf("���强��! %d,%d,%s\n", 100, 200, data);
		}
		else {
			printf("�������! ret=%d\n", ret);
		}
		fclose(fp);
	}
	else { printf("������ ���� ���߽��ϴ�\n"); }

	//read��带 ����Ͽ� �����б�
	fopen_s(&fp, "test2.txt", "rt");
	int input[2]; // 0 1 2
	if (fp != NULL) {
		for (int i = 0; i < 2; i++) {
			int ret = fscanf_s(fp, "%d", &input[i]);
			if (ret != EOF) {
				printf("�б� ���� ! input[%d]=%d\n", i, input[i]);
			}
		}
		int ret = fscanf_s(fp, "%s", buf, sizeof(buf));
		if (ret != EOF) {
			printf("�б⼺�� ! %s\n", buf);
		}
		else { printf("�б� ����\n"); }
		fclose(fp);
	}
	else { printf("������ ���� ���߽��ϴ�\n"); }

}
