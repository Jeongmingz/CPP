#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main() {

	string a = "aa";
	string b("bb");
	string c("01234567890123456789012345678901");

	
	string d(7, 'd'); // d �� 7�� �����ؼ� ��� (�Ű����� ������)

	
	string e("daelim", 3); // daelim�� �տ��� ���� 3���� �����ؼ� ��� (�Ű����� ������)

	string f(b);  // ���� ������
	string g = a; // ���� ������, ���۷����� �����ε�

	string h;

	cout << c.substr(1, 10) << endl; // �ε��� �� ���� Ư������ ��� (1~10)
	cout << c.at(3) << endl; // ���۷����� �����ε�
	cout << c[3] << endl; // �޼ҵ�

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