#include<stdio.h>
int main() {

	int key;

	while (1) {
		printf("출력할 단을 입력하시오 : ");
		scanf_s("%d", &key);
		if (key == 0) {
			break;
		}//if 종료
		else if (key < 0 || key>9) {
			continue;
		}//else~if 종료
		else {
			for (int i = 1; i < 10; i++) {
				printf("%d * %d = %d\n", key, i, key * i);

			}//for문 종료
		}//else문 종료
	} //while(1) 종료
	printf("종료");
}//main() 종료