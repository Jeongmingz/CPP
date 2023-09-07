//#include <iostream>
//#include <string>
//using namespace std;
//
//class Complex {
//	// ����� ����� ��. dynamic_const, mutable�� ����� ����
//	friend 	Complex operator+(const Complex& left, const Complex& right);
//private:
//	int real; // �Ǽ���
//	int imag; // �����
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
//	Complex operator++() { // ���� ����
//		this->real = this->real + 1;
//
//		return Complex(this->real, this->imag);
//	}
//
//	Complex operator++(int) { // �������� (int �� ������ ���������� �ȴ�.)
//		Complex copy(this->real, this->imag);
//		this->real = this->real + 1;
//		return copy;
//	}
//};
//
//
//
//// ���Ҽ� ���ϱ� ������ ��� �Լ��� �ƴ� �Ϲ��Լ��� ����
//// �Ϲ��Լ��� �����ϱ� ���ؼ� �º��� �캯�� ���� �޾� getter�� ����ؾ� �Ѵ�.
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