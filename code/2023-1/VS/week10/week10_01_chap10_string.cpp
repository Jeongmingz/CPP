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
//	//getline(cin, b); // \n을 만나면 입력을 멈춘다. : 기본값
//	getline(cin, b, '!'); // !를 만나면 입력을 멈춘다
//	cout << b << '\n';
//
//	cout << a.capacity() << " / " << a.size() << '\n';
//	a.reserve(25); // 25개의 문자를 담을 수 있는 공간을 예약 신청한다.
//	cout << a.capacity() << " / " << a.size() << '\n';
//	
//	return 0;
//}