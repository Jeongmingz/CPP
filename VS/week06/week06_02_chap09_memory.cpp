// week06_02_chap09_memory.cpp
#include <iostream>
using namespace std;

int main() {
	int rSize, cSize;
	cin >> rSize; // �� �л� ��
	cin >> cSize; // �� ���� ��

	int** scores = new int* [rSize]; // pointer Array (heap memory)

	for (int i = 0; i < rSize; i++) {
		// scores[i] = new int[cSize];
		*(scores + i) = new int[cSize];
	}
	
	
	// �л� : 2��  ���� : 3��
	int score;

	for (int i = 0; i < rSize; i++) {
		double sum = 0;
		double avg = 0;

		for (int j = 0; j < cSize; j++) {
			cout << i+1 << "�� ° �л��� ���� ������ �Է����ּ���.\n";
			cin >> score;
			scores[i][j] = score;
			sum = sum + score;
		}
		avg = sum / cSize;
		cout << "����� " << avg << "�� �Դϴ�.\n\n";
	}


	for (int i = 0; i < rSize; i++) {
		delete[] scores[i];
	}
	delete[] scores;

	return 0;
}