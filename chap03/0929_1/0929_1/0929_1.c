/*1����100���� 1�������Ͽ� ���� ���ϴ� ���α׷���   for������ �ۼ�    while���� do~while������ �ۼ��Ͻÿ�.    ���ȭ��   for 1~100������ �� : 5050   while 1~100������ �� : 5050   do~while 1~100������ �� : 5050 */

#include<stdio.h>
int main() {
    int a, b, c;
    int sum=0;
    int sumb = 0;
    int sumc = 0;
    for (a = 1; a <= 100; a++) {
        sum = sum + a;
    }
    printf("for 1~100������ �� : %d\n", sum);
    
    b = 0;
    while (b <= 100) {
        sumb = sumb + b;
        b++;
    }
    printf("while 1~100������ �� : %d\n", sumb);

    c = 0;
    do {
        sumc = sumc + c;
        c++;
    } while (c <= 100);
    printf("do-while 1~100������ �� : %d\n", sumc);
    
    
    return 0;
}