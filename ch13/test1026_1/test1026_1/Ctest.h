#include "Ptest.h"
using namespace std;
#pragma once

// 부모를 상속받고 자식클래스를 선언하고 구현하여 작성
class Ctest : public Ptest {
public:
	//Ctest();
	//~Ctest();
	void tim(void);
	void dev(void);


};


void Ctest::tim(void) {
	cout << a1 << " * " << b1 << " = " << a1 * b1 << endl;

}

void Ctest::dev(void) {
	cout << a1 << " / " << b1 << " = " << a1 / b1 << endl;

}