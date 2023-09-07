#include <iostream>
#include <string>
using namespace std;


// �ϳ� �̻��� ���� �����Լ��� ������ �����Ƿ� �߻� Ŭ������
class Animal 
{
public:
	// pure virtual function
	virtual void cry() const = 0;
	//{ cout << "������ �Ҹ��� ��" << endl; }
};

class Dog : public Animal
{
public:
	// overriding
	void cry() const { cout << "�۸�" << endl; } 
};

class Cat : public Animal
{
public:
	// overriding
	void cry() const { cout << "�߿�" << endl; }
};
int main()
{
	// ���� ���� �Լ��� 1�� �̻� ���� �߻�Ŭ������ ��� ��ü(�ν��Ͻ�)�� ������ �� ����.
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
	ptrA->cry(); //�θ� Ŭ����(Animal)�� �����ͷ� ��� (cry�� virtual �Լ��̱� �����̴�)
	delete ptrA;
	ptrA = nullptr;

	return 0;
}
