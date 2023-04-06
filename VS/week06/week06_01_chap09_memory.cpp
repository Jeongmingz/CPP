//// week06_01_chap09_memory.cpp
//#include <iostream>
//using namespace std;
//
//int main() {
//	int* students = new int[3]; // heap memory
//
//	students[0] = 99;
//	students[1] = 100;
//	students[2] = 91;
//
//	cout << *(students + 1);
//	
//	delete[] students; // free heap memory
//	// delete[] students; // double free 이미 free된 객체를 다시 free할 수 없다.
//	students = nullptr; 
//
//	return 0;
//}