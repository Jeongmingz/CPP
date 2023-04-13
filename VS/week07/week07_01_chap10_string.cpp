//#pragma warning(disable: 4996)
//
//#include <iostream>
//#include <cstring> // c언어에서 string.h로 사용되던 라이브러리
//using namespace std;
//
//int main() {
//	const char* univ1 = "Daelim"; // Daelim is String literal.
//	char univ2 [] = "Daelim"; // Daelim is compact initializer / 원소 변경 가능.
//	const char univ3 [] = "Daelim"; // Daelim is compact initializer
//	char univ4[] = "Inha";
//
//	// null 값은 카운팅되지 않는다.
//	cout << strlen(univ2) << "\n";
//	cout << strlen(univ4) << "\n";
//	strcpy(univ2, univ4); 
//	// MS VS에서는 컴파일 에러. strcpy 대신에 strcpy_s를 권고.
//	// gcc, clang 유닉스 계열 컴파일러에서는 에러가 나질 않는다.
//	// 코드의 호환을 통해 c4996에러를 무시하는 코드를 명시해줘야 한다.
//	// #pragma warning(disable: 4996)
//
//	cout << univ2 << "\n";
//
//	//cout << univ1 << "\n";
//	//*(univ1 + 1) = 'f'; // 상수 값 (문자열 리터럴) 변경 불가
//	//univ2[1] = 'f';
//	//cout << univ2 << "\n";
//	return 0;
//}