#pragma warning(disable: 4996)

#include <iostream>
#include <cstring> // c���� string.h�� ���Ǵ� ���̺귯��
using namespace std;

int main() {
	char* pUniv = nullptr;

	char univ[20];

	//cin >> univ; // enter, space bar, tab�� ���еȴ�.
	cin.getline(univ, 20); // enter�� ������ ��� �����ڸ� ����Ѵ�. => line ���� �Է�

	cout << univ << "\n";

	pUniv = strstr(univ, "univ"); //
	
	cout << (pUniv - &univ[0]) << "\n";


	return 0;
}