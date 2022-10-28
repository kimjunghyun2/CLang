#pragma once
// Figure.h
class Figure
{
public:
	Figure(int x, int y, int width, int height);
	~Figure();

	void Move(int x, int y);				// 도형 이동
	void Resize(int width, int height);	// 도형 크기 조절
	void Draw();							// 도형 그리기

protected:
	int x;								// 중심의 x좌표
	int y;								// 중심의 x좌표
	int width;							// 가로 길이
	int height;							// 세로 길이
};

class Ellipse : public Figure
{
public:
	Ellipse(int x, int y, int width, int height);
	~Ellipse();
	void Draw();		// 오버라이딩
};

class Triangle : public Figure
{
public:
	Triangle(int x, int y, int width, int height);
	~Triangle();
	void Draw();		// 오버라이딩
};

class Rectangle : public Figure
{
public:
	Rectangle(int x, int y, int width, int height);
	~Rectangle();
	void Draw();		// 오버라이딩
};
