 
#include <iostream>
#include <cstring> // c���� string.h�� ���Ǵ� ���̺귯��
using namespace std;

int main() {
	const char* univ1 = "Daelim"; // Daelim is String literal.
	char univ2 [] = "Daelim"; // Daelim is compact initializer / ���� ���� ����.
	const char univ3 [] = "Daelim"; // Daelim is compact initializer
	char univ4[] = "Inha";

	cout << strlen(univ2) << "\n";
	cout << strlen(univ4) << "\n";
	strcpy(univ2, univ4); 
	// MS VS������ ������ ����. strcpy ��ſ� strcpy_s�� �ǰ�.
	// gcc, clang ���н� �迭 �����Ϸ������� ������ ���� �ʴ´�.
	// �ڵ��� ȣȯ�� ���� c4996������ �����ϴ� �ڵ带 ��������� �Ѵ�.
	// #pragma warning(disable: 4996)

	cout << univ2 << "\n";

	//cout << univ1 << "\n";
	//*(univ1 + 1) = 'f'; // ��� �� (���ڿ� ���ͷ�) ���� �Ұ�
	//univ2[1] = 'f';
	//cout << univ2 << "\n";
	return 0;
}