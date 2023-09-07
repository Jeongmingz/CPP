//#include <iostream>
//#include <string>
//using namespace std;
//
//
//class Animal
//{
//public:
//	virtual void cry() const { cout << "동물이 소리를 냄" << endl; }
//};
//
//class Dog : public Animal
//{
//public:
//	void cry() const { cout << "멍멍" << endl; }
//};
//
//class Cat : public Animal
//{
//public:
//	void cry() const{ cout << "야옹" << endl; }
//};
//int main()
//{
//	Animal* ptrA = new Cat(); // upcast
//	ptrA->cry(); // virtual
//	// 캐스트 성공 시 매개변수가 가르키던 곳의 번지 주소를 리턴
//	// Cat* ptrC = dynamic_cast<Cat*> (ptrA); 
//	// C언어 스타일도 dynamic_cast의 결과와 같다.
//	Cat* ptrC = (Cat*)ptrA;
//	ptrC->cry();
//
//	// 주소를 리턴해서는 안된다. 하지만 리턴하고 있음.
//	// Dog* ptrD = (Dog*)ptrA;
//	 
//	// 캐스트 실패 시 NULL을 리턴
//	Dog* ptrD = dynamic_cast <Dog*> (ptrA); 
//	cout << ptrD << endl;
//	ptrD->cry(); // ptrD가 가르키는 힙 메모리 주소가 없다. (NULL)
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