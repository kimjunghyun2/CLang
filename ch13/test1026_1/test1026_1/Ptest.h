#include<iostream>
using namespace std;
#pragma once

// �θ��� Ŭ���� ����� ������ ���� �ۼ�
class Ptest {
public:
	Ptest(void);
	~Ptest(void);

	void Add(void); // ���ϱ�
	void Min(void); // ����
	int a1, b1;


};
Ptest::Ptest(void) {
	cout << "ù��° ���� �Է� >> " << endl;
	cin >> a1;
	cout << "�ι�° ���� �Է� >> " << endl;
	cin >> b1;
}
Ptest::~Ptest(void) {

}
void Ptest::Add(void) {
	cout << a1 << " + " << b1 << " = " << a1 + b1 << endl;
}
void Ptest::Min(void) {
	cout << a1 << " - " << b1 << " = " << a1 - b1 << endl;
}
