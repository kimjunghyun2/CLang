#include<stdio.h>
#define MAX 5
int main() {

	char a[MAX];
	//���� �߻� a = "good";
	a[0] = 'g';
	a[1] = 'o';
	a[2] = 'o';
	a[3] = 'd';
	a[4] = '\0';
	for (int i = 0; i < MAX; i++) {
		printf("%c", a[i]);
	}
}
