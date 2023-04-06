// week06_02_chap09_memory.cpp
#include <iostream>
using namespace std;

int main() {
	int rSize, cSize;
	cin >> rSize; // 행 학생 수
	cin >> cSize; // 열 과목 수

	int** scores = new int* [rSize]; // pointer Array (heap memory)

	for (int i = 0; i < rSize; i++) {
		// scores[i] = new int[cSize];
		*(scores + i) = new int[cSize];
	}
	
	
	// 학생 : 2명  과목 : 3개
	int score;

	for (int i = 0; i < rSize; i++) {
		double sum = 0;
		double avg = 0;

		for (int j = 0; j < cSize; j++) {
			cout << i+1 << "번 째 학생의 과목별 점수를 입력해주세요.\n";
			cin >> score;
			scores[i][j] = score;
			sum = sum + score;
		}
		avg = sum / cSize;
		cout << "평균은 " << avg << "점 입니다.\n\n";
	}


	for (int i = 0; i < rSize; i++) {
		delete[] scores[i];
	}
	delete[] scores;

	return 0;
}