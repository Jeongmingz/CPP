#include <iostream>
#include <string>
using namespace std;

class Animal  // �ϳ� �̻��� ���� ���� �Լ��� ������ �����Ƿ� �߻� Ŭ����
{
public:
//virtual void cry() const 
//{
//	cout << "������ �Ҹ��� ��" << endl;
//}
	virtual void cry() const = 0;  // pure virtual function
};

class Dog : public Animal
{
public:
	void cry() const { 
		cout << "�۸�!" << endl; 
	}
};

class Cat : public Animal
{
public:
	void cry() const {
		cout << "�Ŀ�~" << endl;
	}
};

int main()
{
	//Animal a;  // ���� ���� �Լ��� 1�� �̻� ���� �߻�Ŭ������ ��� ��ü(�ν��Ͻ�) ���� �Ұ�
	//a.cry();

	Dog d1;
	d1.cry();

	Cat c1;
	c1.cry();

	Cat* c2 = new Cat();
	c2->cry();
	delete c2;
	c2 = nullptr;

	Animal* ptrA = new Dog();  // ������ �� ĳ����
	ptrA->cry(); // �θ� Ŭ����(Animal)�� �����ͷ� ��� (cry�� virtual function)
	delete ptrA;
	ptrA = nullptr;

	return 0;
}