/*
chapter03 반복과 조건

반복 :	정해진 횟수로 반복(for)
		정해진 횟수가 없을 때 반복 사용(while, do-while)
조건 :	조건식의 판단에 따라 분기하는 문장
		(if, if-else, if~else if,if~else if ~ else)
		(switch)


*/

#include<stdio.h>
int main() {
	int loop = 1;
	int key;
	while (loop <= 10) {
		printf("%d little indian boy\n", loop);

		loop++;
	}

	do {
		printf("%d Little \n", loop);
		loop++;
	} while (loop <= 20);

	for (int i = 0; i <= 10; i++)
	{
		printf("%d\t", i);
	}

	return 0;
}