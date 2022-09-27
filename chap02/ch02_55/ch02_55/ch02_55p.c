#include<stdio.h>
int main() {
	int i = 0, j = 10;
	i = i + 1; // == i += 1
	j = j + i; // == j += i

	printf("i=%d\t\t j=%d\n", i,j);

	int a = 10, b = 20, c = 30, d = 5, result, res;

	result = a + (b + c) * c / d;
	printf("result = %d\n", result);
	res = b + c;
	res *= c;
	res /= d;
	res += a;
	printf("res = %d\n", res);

}