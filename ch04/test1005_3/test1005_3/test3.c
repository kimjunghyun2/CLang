/*
--------------------------------
a[0]= 1
a[1]= 2
a[2]= 3
a[3]= 4
a[4]= 5
-----------------------------
b[0]= 10
b[1]= 20
b[2]= 30
b[3]= 40
b[4]= 50
합계 = 220, 평균 = 44
------------------------------
int arr1[SIZE]={12,32,76,51,49};
int arr2[SIZE]={34,56,29,54,21};
int arr3[SIZE];

12 + 34 = 46
32 + 56 = 88
76 + 29 = 105
51 + 54 = 105
49 + 21 = 70
-------------------------
숫자입력 = 1
숫자입력 = 2
숫자입력 = 3
숫자입력 = 4
숫자입력 = 0
짝수의 합 = 6, 홀수의 합 = 4
*/

#include<stdio.h>
#define SIZE 5
int main() {
	int i,sum=0;
	int sum2 = 0;
	
	int a[5] = { 1,2,3,4,5 };
	int arr[SIZE] = { 34,10,25,71,80 };
	int arr1[SIZE] = { 12,32,76,51,49 };
	int arr2[SIZE] = { 34,56,29,54,21 };
	int arr3[SIZE] = { 0 };

	for (i = 0; i < 5; i++) {
		a[i] = i + 1;
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("------------------------------\n");
	int b[5] = { 0 };
	for (i = 0; i <5; i++) {
		b[i] =( i+ 1)*10;
		printf("b[%d] = %d\n", i, b[i]);
		sum += b[i];
	}
	printf(" 합계 = %d,  평균 = %d\n", sum, sum / i);
	printf("------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
		sum2 += arr[i];
	}
	printf(" 합계 = %d,  평균 = %d\n", sum2, sum2 / i);
	printf("------------------------------\n");
	for (i = 0; i < 5; i++) {
		arr3[i] = arr1[i] + arr2[i];
		printf("%d + %d = %d\n", arr1[i], arr2[i], arr3[i]);
	}
	printf("------------------------------\n");
	/*
	정수를 입력받아서 total[0]에 짝수(숫자%2==0)와 total[1]에홀수(숫자%2==1)의 합을 구하고 
	0 이면 종료

	숫자입력 = 1
	숫자입력 = 2
	숫자입력 = 3
	숫자입력 = 4
	숫자입력 = 0
	짝수의 합 = 6, 홀수의 합 = 4

	*/

	int input;
	int total[2] = { 0 };
	do {
		printf("숫자입력 = ");
		scanf_s("%d", &input);
		total[input % 2] += input;
		//else if (input == 0) {
		//	break;
		//}

		
	} while (input != 0);
	printf("짝수의 합 : %d, 홀수의 합 %d", total[0], total[1]);





	return 0;
}