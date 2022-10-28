#pragma once
#include "Parent.h"
// 상속형식 => clas 접근권한지정 자식클래스명  : 접근권한 지정 부모클래스

class Child : public Parent {
public:
	Child();				//생성자
	~Child();				//소멸자
	void Humanity(void);	// 추가된 멤버 함수와 부모의 멤버함수까지 전체 4개 사용 가능
};