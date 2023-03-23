// week04_03_chap09_reference_pointer.cpp
#include <iostream>
using namespace std;

//int squares(int n) {
//	return n * n;
//}



// Option.1 : Reference Variable
void squares(int& ra) { // pass by reference
	int b = 10;
	ra = b; // ra의 별명은 프로그램 종료까지 a이다.

	ra = ra * ra;
}

// [1] 레퍼런스는 한 번 별명이 되면 다시 절대로 다른 변수의 별명이 될 수 없다.
// [2] 래퍼런스는 반드시 선언과 동시에 어떤 변수의 별명이 될 것인지 결정해야 한다.
// [3] 래퍼런스는 해당 타입의 리터럴 값으로 초기화 될 수 없다.
// [4] 3번 사항의 예외로 const 키워드를 레퍼런스 앞에 붙이면 초기화 할 수 있다.
// [5] 레퍼런스는 원본 변수의 타입과 일치해야 한다.
// [6] 한 변수에 대해 레퍼런스 변수는 여러개 일 수 있다.
// [7] 원본 변수가 const라면 레퍼런스 변수도 반드시 const해야 한다.


// Option.2 : Pointer
//void squares(int* ra) { // pass py Pointer
//	int b = 10;
//	ra = &b;
//	*ra = *ra * *ra;
//	cout << *ra << ", " << b << '\n';
//}
// &: 주는 놈 *: 받는 놈

int main() {

	int num = 100;
	int& rNum1 = num;

	int* p;
	//int* p = nullptr
	//int& p => 구문 에러

	//int& r = 99; => 구문 에러
	const int& r = 99;

	int a = 4;
	/*int& ra = a;*/

	squares(a);
	//squares(&a);

	cout << a << '\n';

	/*cout << ra << "\n";

	ra = 5;

	cout << a << '\n';

	cout << &a << " //// " << &ra << '\n';*/

	return 0;
}