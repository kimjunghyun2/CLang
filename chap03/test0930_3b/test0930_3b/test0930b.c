#include<stdio.h>
int main() {

	for (int i = 2; i < 10; i++) { //´Ü ¼ö 
		printf("=========%d´Ü=========\n",i);
		for (int k = 1; k < 10; k++) {
			printf("%d * %d = %d\n",i,k,i*k);
		}
	}
	return 0;
}