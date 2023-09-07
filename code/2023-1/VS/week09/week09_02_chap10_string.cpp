#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {

	string a = "aa";
	string b("bb");
	string c("01234567890123456789012345678901");

	
	string d(7, 'd'); // d 를 7번 복사해서 담기 (매개변수 생성자)

	
	string e("daelim", 3); // daelim을 앞에서 부터 3개를 복사해서 담기 (매개변수 생성자)

	string f(b);  // 복사 생성자
	string g = a; // 복사 생성자, 오퍼레이터 오버로딩

	string h;

	cout << c.substr(1, 10) << endl; // 인덱스 값 범위 특정문자 출력 (1~10)
	cout << c.at(3) << endl; // 오퍼레이터 오버로딩
	cout << c[3] << endl; // 메소드

	cout << e << endl;
	cout << h << endl;

	cout << f.size() << endl;
	cout << g.size() << endl;

	cout << d << '\n';

	cout << a.size() << '\n';
	cout << b.size() << '\n';
	cout << c.size() << '\n';
	
	cout << a.capacity() << '\n';
	cout << b.capacity() << '\n';
	cout << c.capacity() << '\n';

	cout << c.front() << "/" << c.back() << '\0';
	return 0;
}