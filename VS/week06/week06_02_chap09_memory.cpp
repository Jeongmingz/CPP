//// week06_02_chap09_memory.cpp
//#include <iostream>
//using namespace std;
//
//int main() {
//	int rSize, cSize;
//	cout << "�� ���� �л��� �ֳ��� ? ";
//	cin >> rSize; // �� �л� ��
//	cout << "�� ���� ������ �ֳ��� ? ";
//	cin >> cSize; // �� ���� ��
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
//	// �л� : 2��  ���� : 3��
//	// ����, ����� ���� �˰���
//
//	for (int i = 0; i < rSize; i++) {
//		double sum = 0;
//		double avg = 0;
//		cout << "=========================================\n";
//		cout << i + 1 << "�� ° �л��� ���� ������ �Է����ּ���.\n";
//		cout << "=========================================\n";
//		for (int j = 0; j < cSize; j++) {
//			cout << j + 1 << "�� ���� :";
//			cin >> scores[i][j];
//			sum = sum + scores[i][j];
//		}
//		avg = sum / cSize;
//		cout << "=========================================\n";
//		cout << i + 1 << "�� �л��� ������ " << sum << "�� �Դϴ�.\n";
//		cout << i + 1 << "�� �л��� ����� " << avg << "�� �Դϴ�.\n\n";
//	}
//
//	// ���� �޸� �Ҵ� ���� ����
//	for (int i = 0; i < rSize; i++) {
//		delete[] scores[i];
//	}
//	delete[] scores;
//
//	return 0;
//}