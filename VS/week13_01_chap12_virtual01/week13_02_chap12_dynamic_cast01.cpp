#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual void cry() const { 
	//void cry() const {
		cout << "동물이 소리를 냄" << endl; 
	}
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
	Animal* ptrA = new Cat();  // upcast
	ptrA->cry();  // virtual

	// downcast

	Cat* ptrC = dynamic_cast<Cat*>(ptrA);  // 캐스트 성공 시 매개변수(ptrA)가 가르키던 곳의 번지 주소를 리턴
	//Cat* ptrC = (Cat*)(ptrA);  // C언어 스타일의 형변환도 dynamic_cast의 결과와 같다.
	ptrC->cry();

	//Dog* ptrD = (Dog*)(ptrA);  // C언어 스타일, 주소를 리턴하면 안되는데 리턴한다
	Dog* ptrD = dynamic_cast<Dog*>(ptrA);  // 보다 안전한 C++ 모던 스타일, 캐스트는 실패하고 NULL을 리턴

	cout << ptrA << " / " << ptrC << " / " << ptrD << "\n";
	ptrD->cry(); // ptrD가 가르키는 힙메모리 주소가 없다 (NULL)
	

	delete ptrA;
	//delete ptrC;  // double free error
	ptrA = nullptr;
	ptrC = nullptr;

	return 0;
}