//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Animal
//{
//public:
//	virtual void cry() const { cout << "������ �Ҹ��� ��" << endl; }
//};
//
//class Dog : public Animal
//{
//public:
//	void cry() const { cout << "�۸�" << endl; }
//};
//
//class Cat : public Animal
//{
//public:
//	void cry() const{ cout << "�߿�" << endl; }
//};
//int main()
//{
//	Animal* ptrA = new Cat(); // upcast
//	ptrA->cry(); // virtual
//	// ĳ��Ʈ ���� �� �Ű������� ����Ű�� ���� ���� �ּҸ� ����
//	// Cat* ptrC = dynamic_cast<Cat*> (ptrA); 
//	// C��� ��Ÿ�ϵ� dynamic_cast�� ����� ����.
//	Cat* ptrC = (Cat*)ptrA;
//	ptrC->cry();
//
//	// �ּҸ� �����ؼ��� �ȵȴ�. ������ �����ϰ� ����.
//	// Dog* ptrD = (Dog*)ptrA;
//	 
//	// ĳ��Ʈ ���� �� NULL�� ����
//	Dog* ptrD = dynamic_cast <Dog*> (ptrA); 
//	cout << ptrD << endl;
//	ptrD->cry(); // ptrD�� ����Ű�� �� �޸� �ּҰ� ����. (NULL)
//
//	cout << ptrA << endl << ptrC << endl;
//
//	delete ptrA;
//	ptrA = nullptr;
//	ptrC = nullptr;
//
//
//	return 0;
//}