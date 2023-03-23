// week04_03_chap09_reference_pointer.cpp
#include <iostream>
using namespace std;

//int squares(int n) {
//	return n * n;
//}



// Option.1 : Reference Variable
void squares(int& ra) { // pass by reference
	int b = 10;
	ra = b;

	ra = ra * ra;
	
}


// Option.2 : Pointer
//void squares(int* ra) { // pass py Pointer
//	int b = 10;
//	ra = &b;
//	*ra = *ra * *ra;
//	cout << *ra << ", " << b << '\n';
//}
// &: ÁÖ´Â ³ð *: ¹Þ´Â ³ð

int main() {
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