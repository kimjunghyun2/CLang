#include<stdio.h>
#include<stdlib.h>
#define NUM 10
int ascending(const void*, const void*);
int dscending(const void*, const void*);
void output(int data[], int size);

int main(void) {
	int data[NUM] = { 10,58,63,21,17,36,93,72,20,11 };
	qsort(data, NUM, sizeof(int), ascending);
	output(data, NUM);

	qsort(data, NUM, sizeof(int), dscending);
	output(data, NUM);
	return 0;
}

int ascending(const void* a, const void* b) {
	if (*(int*)a > *(int*)b)
		return 1;
	else if (*(int*)a < *(int*)b)
		return -1;
	else
		return 0;
}
int dscending(const void* a, const void* b) {
	if (*(int*)a < *(int*)b)
		return 1;
	else if (*(int*)a > *(int*)b)
		return -1;
	else
		return 0;
}
void output(int data[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d\t", data[i]);
	}
	printf("\n");
}
