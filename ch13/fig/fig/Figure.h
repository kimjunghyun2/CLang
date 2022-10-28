#pragma once
// Figure.h
class Figure
{
public:
	Figure(int x, int y, int width, int height);
	~Figure();

	void Move(int x, int y);				// ���� �̵�
	void Resize(int width, int height);	// ���� ũ�� ����
	void Draw();							// ���� �׸���

protected:
	int x;								// �߽��� x��ǥ
	int y;								// �߽��� x��ǥ
	int width;							// ���� ����
	int height;							// ���� ����
};

class Ellipse : public Figure
{
public:
	Ellipse(int x, int y, int width, int height);
	~Ellipse();
	void Draw();		// �������̵�
};

class Triangle : public Figure
{
public:
	Triangle(int x, int y, int width, int height);
	~Triangle();
	void Draw();		// �������̵�
};

class Rectangle : public Figure
{
public:
	Rectangle(int x, int y, int width, int height);
	~Rectangle();
	void Draw();		// �������̵�
};
