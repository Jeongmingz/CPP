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
// 		// �����ͺ����� ���� �����Ͽ� �� �� ����.
// 		*changeStr = *mainStr;
		
// 		// �����͸� ���������μ� �� ������ ���� ���� �� �� �ִ�.
// 		mainStr++;
// 		changeStr++;
// 	}
// 	// ����Ǿ��ִ� ������ ��ġ�� NULL �߰� (cout�� NULL���� ����ϴ� ���� Ȱ��)
// 	*changeStr = NULL;
// }



// int main() {
// 	char univ1 [] = "Daelim"; // Daelim is compact initializer / ���� ���� ����.
// 	char univ2[] = "Inha";

// 	cout << myStrLen(univ1) << '\n';
// 	cout << myStrLen(univ2) << '\n';

// 	myStrCopy(univ1, univ2);
// 	cout << univ1 << '\n';
// }