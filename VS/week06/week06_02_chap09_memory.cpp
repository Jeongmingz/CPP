//// week06_02_chap09_memory.cpp
//#include <iostream>
//using namespace std;
//
//int main() {
//	int rSize, cSize;
//	cout << "몇 명의 학생이 있나요 ? ";
//	cin >> rSize; // 행 학생 수
//	cout << "몇 개의 과목이 있나요 ? ";
//	cin >> cSize; // 열 과목 수
//
//	cout << "\n";
//
//	int** scores = new int* [rSize]; // pointer Array (heap memory)
//
//	for (int i = 0; i < rSize; i++) {
//		// scores[i] = new int[cSize];
//		*(scores + i) = new int[cSize];
//	}
//	
//	
//	// 학생 : 2명  과목 : 3개
//	// 총점, 평균을 내는 알고리즘
//
//	for (int i = 0; i < rSize; i++) {
//		double sum = 0;
//		double avg = 0;
//		cout << "=========================================\n";
//		cout << i + 1 << "번 째 학생의 과목별 점수를 입력해주세요.\n";
//		cout << "=========================================\n";
//		for (int j = 0; j < cSize; j++) {
//			cout << j + 1 << "번 과목 :";
//			cin >> scores[i][j];
//			sum = sum + scores[i][j];
//		}
//		avg = sum / cSize;
//		cout << "=========================================\n";
//		cout << i + 1 << "번 학생의 총점은 " << sum << "점 입니다.\n";
//		cout << i + 1 << "번 학생의 평균은 " << avg << "점 입니다.\n\n";
//	}
//
//	// 동적 메모리 할당 공간 해제
//	for (int i = 0; i < rSize; i++) {
//		delete[] scores[i];
//	}
//	delete[] scores;
//
//	return 0;
//}