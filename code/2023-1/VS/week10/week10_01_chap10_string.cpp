<<<<<<< HEAD:VS/week10/week10_01_chap10_string.cpp
#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {

	string a = "aaa";
	string b;

	//cin >> b; // \n , \t, space bar

	//getline(cin, b); // \n�� ������ �Է��� �����. : �⺻��
	getline(cin, b, '!'); // !�� ������ �Է��� �����
	cout << b << '\n';

	cout << a.capacity() << " / " << a.size() << '\n';
	a.reserve(25); // 25���� ���ڸ� ���� �� �ִ� ������ ���� ��û�Ѵ�.
	cout << a.capacity() << " / " << a.size() << '\n';
	
	return 0;
}
=======
//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//
//int main() {
//
//	string a = "aaa";
//	string b;
//
//	//cin >> b; // \n , \t, space bar
//
//	//getline(cin, b); // \n�� ������ �Է��� �����. : �⺻��
//	getline(cin, b, '!'); // !�� ������ �Է��� �����
//	cout << b << '\n';
//
//	cout << a.capacity() << " / " << a.size() << '\n';
//	a.reserve(25); // 25���� ���ڸ� ���� �� �ִ� ������ ���� ��û�Ѵ�.
//	cout << a.capacity() << " / " << a.size() << '\n';
//	
//	return 0;
//}
>>>>>>> b8aaa4f32a7bae8d0e319ec7f174fb9c553fa518:code/2023-1/VS/week10/week10_01_chap10_string.cpp