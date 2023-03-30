// week05_02_chap09_memory.cpp
#include <iostream>
using namespace std;

//char* reverseString(const char* original, int size) {
//	char* reverse = new char[size+1];
//	
//	for (int i = 0; i < size; i++) {
//		reverse[i] = original[size - i - 1];
//
//		if (original[size - i - 1])
//			reverse[i + 1] = NULL;
//	}
//
//
//
//	return reverse;
//}

char* reverseString(const char* original, int size) {
	char reverse[7];

	for (int i = 0; i < size; i++) {
		reverse[i] = original[size - i - 1];

		if (original[size - i - 1])
			reverse[i + 1] = NULL;
	}

	cout << reverse << "\n";

	return reverse;
}


int main() {
	char text[] = "daelim";
	cout << text << "\n";

	char* copy = reverseString(text, 6);
	cout << copy << "\n";

	return 0;
}