#pragma once
#include "Parent.h"
// ������� => clas ���ٱ������� �ڽ�Ŭ������  : ���ٱ��� ���� �θ�Ŭ����

class Child : public Parent {
public:
	Child();				//������
	~Child();				//�Ҹ���
	void Humanity(void);	// �߰��� ��� �Լ��� �θ��� ����Լ����� ��ü 4�� ��� ����
};