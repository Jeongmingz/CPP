//#include <iostream>
//#include <string>
//using namespace std;
//
//class Complex {
//	// 편법을 사용한 것. dynamic_const, mutable과 비슷한 느낌
//	friend 	Complex operator+(const Complex& left, const Complex& right);
//private:
//	int real; // 실수부
//	int imag; // 허수부
//public:
//	Complex(int real, int imag) : real(real), imag(imag) {};
//
//	int getReal() const {
//		return real;
//	}
//	
//	int getImag() const {
//		return imag;
//	}
//
//	void print() const {
//		cout << this->getReal() << '+' << this->getImag() << "i" << '\n';
//	}
//
//	//Complex operator+(const Complex& right) {
//	//	int r = this->real + right.real;
//	//	int i = this->imag + right.imag;
//
//	//	return Complex(r, i);
//	//}
//
//
//	Complex operator++() { // 전위 연산
//		this->real = this->real + 1;
//
//		return Complex(this->real, this->imag);
//	}
//
//	Complex operator++(int) { // 후위연산 (int 가 있으면 후위연산이 된다.)
//		Complex copy(this->real, this->imag);
//		this->real = this->real + 1;
//		return copy;
//	}
//};
//
//
//
//// 복소수 더하기 연산을 멤버 함수가 아닌 일반함수로 구현
//// 일반함수로 구현하기 위해선 좌변과 우변을 각각 받아 getter를 사용해야 한다.
//Complex operator+(const Complex& left, const Complex& right) {
//	//int r = left.getReal() + right.getReal();
//	//int i = left.getImag() + right.getImag();
//	int r = left.getReal() + right.getReal();
//	int i = left.getImag() + right.getImag();
//
//	return Complex(r, i);
//}
//
//
//ostream& operator<<(ostream& left, const Complex& right) {
//	left << right.getReal() << "+" << right.getImag() << "i\n";
//	return left;
//}
//
//
//int main() {
//
//	Complex c1(3, 7);
//	Complex c2(19, 2);
//	Complex c3(0, 0);
//	Complex c4(0, 0);
//	
//
//	c1.print();
//	c2.print();
//
//	c3 = c1 + c2;
//	c3 = c1 + (c2);
//	c4 = c3++;
//
//	c3.print();
//	c4.print();
//
//	cout << c4;
//
//	return 0;
//}