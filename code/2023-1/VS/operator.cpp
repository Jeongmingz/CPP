#include <iostream>
using namespace std;

class Complex {
	friend Complex operator+(const Complex& left, const Complex& right);
private:
	int real; // 실수부
	int imag; // 허수부 (imaginary)
public:
	Complex(int real, int imag) : real(real), imag(imag) {
		// 필요하면 추가 코드 작성
	}
	int getReal() const {
		return real;
	}
	int getImag() const {
		return imag;
	}

	// 멤버함수로 +연산 오버로딩
	//Complex operator+(const Complex& right) {
	//	int r = this->real + right.real;
	//	int i = this->imag + right.imag;
	//	return Complex(r, i);
	//}
	Complex operator++() {  // 전위 연산
		this->real = this->real + 1;
		return Complex(this->real, this->imag);
	}
	Complex operator++(int) {  // 후위 연산
		Complex previous(this->real, this->imag);  // back-up
		this->real = this->real + 1;
		return previous;
	}
};

// 복소수 + 연산을 멤버함수가 아닌 일반함수로 구현
Complex operator+(const Complex& left, const Complex& right) {
	//int r = left.getReal() + right.getReal();
	//int i = left.getImag() + right.getImag();
	int r = left.real + right.real;
	int i = left.imag + right.imag;
	return Complex(r, i);
}

ostream& operator<<(ostream& left, const Complex& right) {
	left << right.getReal() << "+" << right.getImag() << "i\n";
	return left;
}

int main()
{
	Complex c1(3, 7);
	Complex c2(19, 2);
	Complex c3(0, 0), c4(0,0);
	//cout << c1.getReal() << "+" << c1.getImag() << "i\n";
	cout << c1;
	cout << c2;
	c3 = c1 + c2; //c3 = c1.operator+(c2);	
	cout << c3;
	//c4 = ++c3;
	c4 = c3++;
	cout << c3.getReal() << "+" << c3.getImag() << "i\n";
	cout << c4.getReal() << "+" << c4.getImag() << "i\n";

	cout << c4;  // 22+9i

	return 0;
}