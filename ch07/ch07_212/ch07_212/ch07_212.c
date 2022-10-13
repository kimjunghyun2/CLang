#include<stdio.h>

int sum(int (*data)[3], int size);

int main(void) {
	int total;
	int data[2][3] = { {10,30,20},{50,70,30} };
	total = sum(data, 2);
	printf("гу╟Х: %d\n",total);
	return 0;

}

int sum(int (*data)[3], int size) {
	int i, j, total = 0;
	for (i = 0; i < size; i++) {
		for (j = 0; j < 3; j++) {
			total += data[i][j];
		}
	}
	return total;
}