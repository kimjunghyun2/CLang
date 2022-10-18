/*1)실행 화면과 같이 data.txt파일을 프로그램으로 작성하시오.2) data.txt파일을 읽어서 out.txt에 쓰기를 하는 프로그램을 작성하시오data.txt박장군 45 3.2최왕자 32 4.1김공주 21 3.5out.txt==========================================성명        나이     학점     환산(100점)==========================================박장군      45        3.2        64최왕자      32        4.1        82김공주      21        3.5        70==========================================
1.문제분석
- 파일입출력 사용
- 구조체 정의와 구조체변수 사용시 배열선언
- wt파일 생성을 data.txt
- rt파일 읽기 data.txt

- wt 파일생성을 out.txt한다.
- 환산점수는 학점 *20이다.

2. 설계
- 입력설계: 배열과 포인터를 이용하여 fprintf()이용
- 처리설계: 학점 계산
- 출력설계:	
*/
#include<stdio.h>

#define MAX 3

FILE* ip; // 입력

FILE* op; // 출력

struct MEM {
	char name[10];
	int age;
	double jumsu;

}data[MAX];
int main() {
	//data.txt 파일 생성
	printf("data.txt파일을 생성합니다.\n");
	fopen_s(&op, "data.txt", "wt");
	if (op != NULL) {
		fprintf(op, "%5s %5d %5.1lf\n", "박장군", 45, 3.2);
		fprintf(op, "%5s %5d %5.1lf\n", "최왕자", 32, 4.1);
		fprintf(op, "%5s %5d %5.1lf\n", "김공주", 21, 3.5);
		fclose(op);
	}
	else {
		printf("파일을 생성하지 못 했습니다.\n");

	}
		//data.txt 파일 읽어서 구조체 배열에 저장

		printf("data.txt 파일 읽어서 구조체 배열에 저장\n");
		fopen_s(&ip, "data.txt", "rt");

	if (ip != NULL) {

		for (int i = 0; i < MAX; i++) {
			if (fscanf_s(ip, "%s %d %lf", data[i].name, sizeof(data[i].name), &data[i].age, &data[i].jumsu) != 0) {

				printf("%5s %5d %5.1lf\n", data[i].name, data[i].age, data[i].jumsu);
			}
		}
		fclose(ip);
	}
	else {
		printf("data.txt 파일을 열지 못 했습니다.\n");

	}
		// out.txt파일을 생성하기

		printf("out.txt파일을 생성하기\n");
	fopen_s(&op, "out.txt", "wt");
	if (op != NULL) {
		fprintf(op, "==================================\n");
		fprintf(op, "성명\t나이\t학점\t환산(100점)\n");
		fprintf(op, "=================================\n");
		for (int i = 0; i < MAX; i++) {
			int val = data[i].jumsu * 20;
			fprintf(op, "%s\t%d\t%.1lf\t%d\n", data[i].name, data[i].age, data[i].jumsu, val);
		}
		fprintf(op, "=================================\n");
		fclose(op);
	}
	else { printf("out.txt 생성하지 못 했습니다."); }
}