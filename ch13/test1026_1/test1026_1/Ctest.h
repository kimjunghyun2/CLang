#include "Ptest.h"
using namespace std;
#pragma once

// �θ� ��ӹް� �ڽ�Ŭ������ �����ϰ� �����Ͽ� �ۼ�
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