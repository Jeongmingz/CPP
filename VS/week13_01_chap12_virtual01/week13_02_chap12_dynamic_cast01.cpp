#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual void cry() const { 
	//void cry() const {
		cout << "������ �Ҹ��� ��" << endl; 
	}
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
	Animal* ptrA = new Cat();  // upcast
	ptrA->cry();  // virtual

	// downcast

	Cat* ptrC = dynamic_cast<Cat*>(ptrA);  // ĳ��Ʈ ���� �� �Ű�����(ptrA)�� ����Ű�� ���� ���� �ּҸ� ����
	//Cat* ptrC = (Cat*)(ptrA);  // C��� ��Ÿ���� ����ȯ�� dynamic_cast�� ����� ����.
	ptrC->cry();

	//Dog* ptrD = (Dog*)(ptrA);  // C��� ��Ÿ��, �ּҸ� �����ϸ� �ȵǴµ� �����Ѵ�
	Dog* ptrD = dynamic_cast<Dog*>(ptrA);  // ���� ������ C++ ��� ��Ÿ��, ĳ��Ʈ�� �����ϰ� NULL�� ����

	cout << ptrA << " / " << ptrC << " / " << ptrD << "\n";
	ptrD->cry(); // ptrD�� ����Ű�� ���޸� �ּҰ� ���� (NULL)
	

	delete ptrA;
	//delete ptrC;  // double free error
	ptrA = nullptr;
	ptrC = nullptr;

	return 0;
}