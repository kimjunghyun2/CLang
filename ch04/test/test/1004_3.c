/*
int aa[4] = {100,200,300,400};
int bb[] ={100,200,300,400};
int cc[4]={100,200};
int dd[4]={0};
int i;


출력결과화면
aa[0]=>100 aa[1]=>200 aa[2]=>300 aa[3]=>400
bb[0]=>100 bb[1]=>200 bb[2]=>300 bb[3]=>400
cc[0]=>100 cc[1]=>200 cc[2]=>0 cc[3]=>0
dd[0]=>0 dd[1]=>0 dd[2]=>0 dd[3]=>0



*/

#include<stdio.h>
int main() {

	int aa[4] = { 100,200,300,400 };
	int bb[] = { 100,200,300,400 };
	int cc[4] = { 100,200 };
	int dd[4] = { 0 };
	int i;

	for (i = 0; i < 4; i++) {
		printf("aa[%d]=>%d", i, aa[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("bb[%d]=>%d", i, bb[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("cc[%d]=>%d", i, cc[i]);
	}
	printf("\n");
	for (i = 0; i < 4; i++) {
		printf("dd[%d]=>%d", i, dd[i]);
	}

	return 0;
}