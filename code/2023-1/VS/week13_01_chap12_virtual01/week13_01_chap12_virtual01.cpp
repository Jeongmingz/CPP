#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
	virtual void print() const { cout << "���̽� Ŭ����" << endl; }
};

class Derived : public Base
{
public:
	void print() const { cout << "�Ļ� Ŭ����" << endl; }
};
int main()
{
	Base* ptr = new Base();
	ptr->print();
	delete ptr;
	ptr = nullptr;

	ptr = new Derived();
	ptr->print();
	delete ptr;
	ptr = nullptr;

	return 0;
}