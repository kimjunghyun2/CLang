/*���� ����� �ǽ�================  c programming ���� ����!!c	p r o g r a m m i n g �б� ����!!���ڿ� ����� �ǽ� ===============  ���� ����! c programming�б� ����! c programming�������� ����� �ǽ� ===============  ���� ����! 100, 200, C_PROGRAMMING�б� ����! input[0] = 100  �б� ����! input[1] = 200�б� ����! C_PROGRAMMING
��ó����: ���̺귯�� �������. ��������
*/

#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	printf("���� ����� �ǽ�================  \n");
	char name[15] = "c programming";
	//������ ����� ������ ���α׷��� ����Ǹ� �޸𸮿��� �����ȴ�.
	//write�� ����Ͽ� ������ �����ϰ� ���ڸ� ���Ͽ� �����ϸ� ������ ����� �� �ִ�.
	fopen_s(&fp, "test.txt", "wt");
	//���ϱ���ü�� Ȱ���� �Լ��� wt�� ���Ͼ���(����)�Ѵ�.
	if (fp != NULL) {//���ϻ����� �Ǹ� NULL�� �ƴ϶� ���� ��
		for (int i = 0; i < strlen(name); i++) {
			//�ݺ����� �ε��� 0���� name�� ���̸�ŭ �ݺ��Ѵ�.
			int ret = fputc(name[i],fp);
			//fput()�Լ��� �ѱ��ھ� ����ؼ� ���Ͽ� �ְ� ret�� ����
			if (ret != EOF) {
				//ret�� EOF�� �ƴϸ� ��
				printf("%c", name[i]);
			}
			else {
				printf("������ ��\n");
				break;
			}
		}printf("���� ����\n");
	}
	else { printf("������ ���� ���߽��ϴ�."); }
	//read�� ����Ͽ� ���� �б�
	if (fp != NULL) {fclose(fp);}
	fopen_s(&fp, "test.txt", "rt");
	if (fp != NULL) {
		for (int i = 0; i < strlen(name); i++) {
			int ret = fgetc(fp);
			if (ret != EOF) {
				printf("%c ", ret);
			}
			else { printf("������ ��\n");
			break;
			}
			
		}
		printf("�б� ����\n");
	}
	else { printf("������ ���� ���߽��ϴ�\n"); }
}