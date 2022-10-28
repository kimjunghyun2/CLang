#pragma once
//클래스 선언부
class Parent				// 부모를 모델링 한 클래스
{
public:						//접근지정자
	Parent(void);			// 생성자
	~Parent(void);			// 소멸자

	void Character(void);	// 성품 출력
	void Appearance(void);	// 외모 출력
	void Wealth(void);		// 재산 출력

private:					// 접근 지정자는 외부 접근을 제한
	int money;				// 돈 저장
};