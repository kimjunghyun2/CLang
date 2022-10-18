/*문자 입출력 실습================  c programming 저장 성공!!c	p r o g r a m m i n g 읽기 성공!!문자열 입출력 실습 ===============  저장 성공! c programming읽기 성공! c programming형식지정 입출력 실습 ===============  저장 성공! 100, 200, C_PROGRAMMING읽기 성공! input[0] = 100  읽기 성공! input[1] = 200읽기 성공! C_PROGRAMMING
전처리기: 라이브러리 헤더파일. 전역변수
*/

#include<stdio.h>
#include<string.h>

FILE* fp;
int main() {
	printf("문자 입출력 실습================  \n");
	char name[15] = "c programming";
	//변수에 저장된 내용은 프로그램이 종료되면 메모리에서 해제된다.
	//write를 사용하여 파일을 생성하고 문자를 파일에 저장하면 다음에 사용할 수 있다.
	fopen_s(&fp, "test.txt", "wt");
	//파일구조체를 활용한 함수로 wt는 파일쓰기(생성)한다.
	if (fp != NULL) {//파일생성이 되면 NULL이 아니라 참이 됨
		for (int i = 0; i < strlen(name); i++) {
			//반복문은 인덱스 0부터 name의 길이만큼 반복한다.
			int ret = fputc(name[i],fp);
			//fput()함수는 한글자씩 출력해서 파일에 넣고 ret에 저장
			if (ret != EOF) {
				//ret가 EOF가 아니면 참
				printf("%c", name[i]);
			}
			else {
				printf("파일의 끝\n");
				break;
			}
		}printf("저장 성공\n");
	}
	else { printf("파일을 열지 못했습니다."); }
	//read를 사용하여 파일 읽기
	if (fp != NULL) {fclose(fp);}
	fopen_s(&fp, "test.txt", "rt");
	if (fp != NULL) {
		for (int i = 0; i < strlen(name); i++) {
			int ret = fgetc(fp);
			if (ret != EOF) {
				printf("%c ", ret);
			}
			else { printf("파일의 끝\n");
			break;
			}
			
		}
		printf("읽기 성공\n");
	}
	else { printf("파일을 열지 못했습니다\n"); }
}