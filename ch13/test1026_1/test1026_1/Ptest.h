#include<iostream>
using namespace std;
#pragma once

// 부모의 클래스 선언과 구현을 같이 작성
class Ptest {
public:
	Ptest(void);
	~Ptest(void);

	void Add(void); // 더하기
	void Min(void); // 빼기
	int a1, b1;


};
Ptest::Ptest(void) {
	cout << "첫번째 숫자 입력 >> " << endl;
	cin >> a1;
	cout << "두번째 숫자 입력 >> " << endl;
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
