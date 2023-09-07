///********************************************************************
// * 다형성의 2가지 재료를 활용해 불완전한 다형성을 살펴보는 프로그램 *
// ********************************************************************/
//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Base
//{
//public:
//	virtual void print() const { cout << "베이스 클래스" << endl; }
//};
//
//class Derived : public Base
//{
//public:
//	void print() const { cout << "파생 클래스" << endl; }
//};
//int main()
//{
//
//	Base* ptr;
//
//	ptr = new Base();
//	ptr->print();
//	delete ptr;
//	ptr = nullptr;
//
//	ptr = new Derived();
//	ptr->print();
//	delete ptr;
//	ptr = nullptr;
//	return 0;
//}