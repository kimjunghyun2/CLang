#include<stdio.h>
int main() {

	for (int i = 2; i < 10; i++) { //�� �� 
		printf("=========%d��=========\n",i);
		for (int k = 1; k < 10; k++) {
			printf("%d * %d = %d\n",i,k,i*k);
		}
	}
	return 0;
}