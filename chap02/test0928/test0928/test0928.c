#include <stdio.h>

int main(void) {
	int a = 10, b, aa, ab;
	printf("a=%d", a);
	b = ++a;// 전위형은 a+=1 => b=a 순서가된다
	printf("b=%d\ta=%d\n", b, a);
	a = 10;
	printf("a=%d", a);
	b = a++; // 후위형은 b=a => a+=1 순서가된다 
	printf("b=%d\ta=%d\n", b, a);





	for (a = 0; a < 5; a++) {
		aa = a++;
		ab = ++a;
		printf("a= %d\n", a);
		printf("aa= %d\n", aa);
		printf("ab= %d\n", ab);
	}



}