/*
부모클래스는  덧셈과 뺄셈을 작성
자식클래스는 곱셈과 나눗셈, 나머지를 작성

*/

#include <iostream>
#include "Ctest.h"

using namespace std;

int main(void) {
	Ctest cal;

	cal.Add();
	cal.Min();
	cal.tim();
	cal.dev();
}