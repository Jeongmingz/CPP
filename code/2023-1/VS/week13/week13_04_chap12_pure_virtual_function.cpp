#include <iostream>
#include <string>
using namespace std;


// 하나 이상의 순수 가상함수를 가지고 있으므로 추상 클래스다
class Animal 
{
public:
	// pure virtual function
	virtual void cry() const = 0;
	//{ cout << "동물이 소리를 냄" << endl; }
};

class Dog : public Animal
{
public:
	// overriding
	void cry() const { cout << "멍멍" << endl; } 
};

class Cat : public Animal
{
public:
	// overriding
	void cry() const { cout << "야옹" << endl; }
};
int main()
{
	// 순수 가상 함수를 1개 이상 가진 추상클래스의 경우 객체(인스턴스)를 생성할 수 없다.
	//Animal a;
	//a.cry();

	Dog d;
	d.cry();

	Cat c;
	c.cry();

	Cat* c2 = new Cat();
	c2->cry();
	delete c2;
	c2 = nullptr;


	// upcasting
	Animal* ptrA = new Dog(); 
	ptrA->cry(); //부모 클래스(Animal)의 포인터로 사용 (cry는 virtual 함수이기 때문이다)
	delete ptrA;
	ptrA = nullptr;

	return 0;
}
