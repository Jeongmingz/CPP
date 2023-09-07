#include <iostream>
#include <string>
using namespace std;

class Animal  // 하나 이상의 순수 가상 함수를 가지고 있으므로 추상 클래스
{
public:
//virtual void cry() const 
//{
//	cout << "동물이 소리를 냄" << endl;
//}
	virtual void cry() const = 0;  // pure virtual function
};

class Dog : public Animal
{
public:
	void cry() const { 
		cout << "멍멍!" << endl; 
	}
};

class Cat : public Animal
{
public:
	void cry() const {
		cout << "냐옹~" << endl;
	}
};

int main()
{
	//Animal a;  // 순수 가상 함수를 1개 이상 가진 추상클래스의 경우 객체(인스턴스) 생성 불가
	//a.cry();

	Dog d1;
	d1.cry();

	Cat c1;
	c1.cry();

	Cat* c2 = new Cat();
	c2->cry();
	delete c2;
	c2 = nullptr;

	Animal* ptrA = new Dog();  // 묵시적 업 캐스팅
	ptrA->cry(); // 부모 클래스(Animal)의 포인터로 사용 (cry는 virtual function)
	delete ptrA;
	ptrA = nullptr;

	return 0;
}