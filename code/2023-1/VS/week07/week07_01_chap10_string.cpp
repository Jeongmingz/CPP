<<<<<<< HEAD:VS/week07/week07_01_chap10_string.cpp
#pragma warning(disable: 4996)

#include <iostream>
#include <cstring> // cï¿½ï¿½î¿¡ï¿½ï¿½ string.hï¿½ï¿½ ï¿½ï¿½ï¿½Ç´ï¿½ ï¿½ï¿½ï¿½Ìºê·¯ï¿½ï¿½
using namespace std;

int main() {
	const char* univ1 = "Daelim"; // Daelim is String literal.
	char univ2 [] = "Daelim"; // Daelim is compact initializer / ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½.
	const char univ3 [] = "Daelim"; // Daelim is compact initializer
	char univ4[] = "Inha";

	cout << strlen(univ2) << "\n";
	cout << strlen(univ4) << "\n";
	strcpy(univ2, univ4); 
	// MS VSï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½. strcpy ï¿½ï¿½Å¿ï¿½ strcpy_sï¿½ï¿½ ï¿½Ç°ï¿½.
	// gcc, clang ï¿½ï¿½ï¿½Ð½ï¿½ ï¿½è¿­ ï¿½ï¿½ï¿½ï¿½ï¿½Ï·ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ ï¿½Ê´Â´ï¿½.
	// ï¿½Úµï¿½ï¿½ï¿½ È£È¯ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ c4996ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½ï¿½ï¿½ï¿½ï¿½Ï´ï¿½ ï¿½Úµå¸¦ ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½ ï¿½Ñ´ï¿½.
	// #pragma warning(disable: 4996)

	cout << univ2 << "\n";

	//cout << univ1 << "\n";
	//*(univ1 + 1) = 'f'; // ï¿½ï¿½ï¿½ ï¿½ï¿½ (ï¿½ï¿½ï¿½Ú¿ï¿½ ï¿½ï¿½ï¿½Í·ï¿½) ï¿½ï¿½ï¿½ï¿½ ï¿½Ò°ï¿½
	//univ2[1] = 'f';
	//cout << univ2 << "\n";
	return 0;
}
=======
//#pragma warning(disable: 4996)
//
//#include <iostream>
//#include <cstring> // c¾ð¾î¿¡¼­ string.h·Î »ç¿ëµÇ´ø ¶óÀÌºê·¯¸®
//using namespace std;
//
//int main() {
//	const char* univ1 = "Daelim"; // Daelim is String literal.
//	char univ2 [] = "Daelim"; // Daelim is compact initializer / ¿ø¼Ò º¯°æ °¡´É.
//	const char univ3 [] = "Daelim"; // Daelim is compact initializer
//	char univ4[] = "Inha";
//
//	// null °ªÀº Ä«¿îÆÃµÇÁö ¾Ê´Â´Ù.
//	cout << strlen(univ2) << "\n";
//	cout << strlen(univ4) << "\n";
//	strcpy(univ2, univ4); 
//	// MS VS¿¡¼­´Â ÄÄÆÄÀÏ ¿¡·¯. strcpy ´ë½Å¿¡ strcpy_s¸¦ ±Ç°í.
//	// gcc, clang À¯´Ð½º °è¿­ ÄÄÆÄÀÏ·¯¿¡¼­´Â ¿¡·¯°¡ ³ªÁú ¾Ê´Â´Ù.
//	// ÄÚµåÀÇ È£È¯À» ÅëÇØ c4996¿¡·¯¸¦ ¹«½ÃÇÏ´Â ÄÚµå¸¦ ¸í½ÃÇØÁà¾ß ÇÑ´Ù.
//	// #pragma warning(disable: 4996)
//
//	cout << univ2 << "\n";
//
//	//cout << univ1 << "\n";
//	//*(univ1 + 1) = 'f'; // »ó¼ö °ª (¹®ÀÚ¿­ ¸®ÅÍ·²) º¯°æ ºÒ°¡
//	//univ2[1] = 'f';
//	//cout << univ2 << "\n";
//	return 0;
//}
>>>>>>> b8aaa4f32a7bae8d0e319ec7f174fb9c553fa518:code/2023-1/VS/week07/week07_01_chap10_string.cpp
