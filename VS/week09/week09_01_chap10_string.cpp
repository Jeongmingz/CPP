// #pragma warning()

// #include <iostream>
// #include <string>
// #include <cstring>

// using namespace std;


// int myStrLen(const char* str) {
// 	int cnt = 0;
// 	for (int k = 0; str[k] != '\0'; k++)
// 		cnt++;
// 	return cnt;
// }

// void myStrCopy(char* changeStr, char* mainStr) {
// 	//int k;
// 	//for (k = 0; mainStr[k] != '\0'; k++) 
// 	//	changeStr[k] = mainStr[k];
// 	//
// 	//changeStr[k + 1] = '\0';

// 	//for (int j = 0; changeStr[j] != '\0'; j++)
// 	//	changeStr[j] = mainStr[j];

// 	while (*mainStr == NULL) {
// 		// 포인터변수의 값에 접근하여 그 값 전달.
// 		*changeStr = *mainStr;
		
// 		// 포인터를 증가함으로서 그 각각의 값을 접근 할 수 있다.
// 		mainStr++;
// 		changeStr++;
// 	}
// 	// 진행되어있는 변수의 위치에 NULL 추가 (cout의 NULL까지 출력하는 성격 활용)
// 	*changeStr = NULL;
// }



// int main() {
// 	char univ1 [] = "Daelim"; // Daelim is compact initializer / 원소 변경 가능.
// 	char univ2[] = "Inha";

// 	cout << myStrLen(univ1) << '\n';
// 	cout << myStrLen(univ2) << '\n';

// 	myStrCopy(univ1, univ2);
// 	cout << univ1 << '\n';
// }