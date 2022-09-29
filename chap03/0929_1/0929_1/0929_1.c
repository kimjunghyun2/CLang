/*1부터100까지 1씩증가하여 합을 구하는 프로그램을   for문으로 작성    while문과 do~while문으로 작성하시오.    결과화면   for 1~100까지의 합 : 5050   while 1~100까지의 합 : 5050   do~while 1~100까지의 합 : 5050 */

#include<stdio.h>
int main() {
    int a, b, c;
    int sum=0;
    int sumb = 0;
    int sumc = 0;
    for (a = 1; a <= 100; a++) {
        sum = sum + a;
    }
    printf("for 1~100까지의 합 : %d\n", sum);
    
    b = 0;
    while (b <= 100) {
        sumb = sumb + b;
        b++;
    }
    printf("while 1~100까지의 합 : %d\n", sumb);

    c = 0;
    do {
        sumc = sumc + c;
        c++;
    } while (c <= 100);
    printf("do-while 1~100까지의 합 : %d\n", sumc);
    
    
    return 0;
}