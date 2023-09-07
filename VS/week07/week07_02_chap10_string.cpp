#pragma warning(disable: 4996)

#include <iostream>
#include <cstring> // c언어에서 string.h로 사용되던 라이브러리
using namespace std;

int main() {
	char* pUniv = nullptr;

	char univ[20];

	//cin >> univ; // enter, space bar, tab가 구분된다.
	cin.getline(univ, 20); // enter를 제외한 모든 구분자를 허용한다. => line 단위 입력

	cout << univ << "\n";

	pUniv = strstr(univ, "univ"); //
	
	cout << (pUniv - &univ[0]) << "\n";


	return 0;
}