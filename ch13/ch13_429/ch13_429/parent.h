#pragma once
//Ŭ���� �����
class Parent				// �θ� �𵨸� �� Ŭ����
{
public:						//����������
	Parent(void);			// ������
	~Parent(void);			// �Ҹ���

	void Character(void);	// ��ǰ ���
	void Appearance(void);	// �ܸ� ���
	void Wealth(void);		// ��� ���

private:					// ���� �����ڴ� �ܺ� ������ ����
	int money;				// �� ����
};