#include <iostream>
#include <string>
using namespace std;


void test(const int& num) {
	//num = 11;
	int& mutableNumber = const_cast<int&>(num);
	mutableNumber = 11;
	cout << num << "\n";
}

int main()
{
	int n = 7;
	const int& number = n;

	//number = 11;

	cout << n << " , " << number << "\n";
	test(n);
	cout << n << " , " << number << "\n";
	return 0;
}