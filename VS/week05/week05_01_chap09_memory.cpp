// week05_01_chap09_memory.cpp
#include <iostream>
using namespace std;

int main() {
	int humans = 0;
	cout << "�� ���̼��� ? ";
	cin >> humans;

	cout << humans << '\n';

	int* pHuman = new int[humans];
	
	for (int i = 0; i < humans; i++) {
		cout << "���̰� ��� �ǽó��� ?";
		cin >> pHuman[i];
	}

	int total = 0;

	cout << "���� Ȯ�� �ϰڽ��ϴ� ~ \n";
	for (int k = 0; k < humans; k++) {
		int age = 0;
		age = pHuman[k];
		
		

		if (age < 8) {
			cout << age << "�� :5000 (���)\n";
			total = total + 5000;
		}
		else if (age < 20) {
			cout << age << "�� :10000 (û�ҳ�)\n";
			total = total + 10000;
		}
		else if (age >= 20) {
			cout << age << "�� :20000 (����)\n";
			total = total + 20000;
		}
		else {
			cout << "�������� ���̰� �ƴմϴ�.";
			break;
		}			
	}

	cout << "\n�� �ݾ��� " << total << "�Դϴ�.";

	//cout << sizeof(*pHuman) * humans;
	
	delete pHuman; // �� �޸𸮰����� ���� �Ҵ�� ��ü ����. (�Ҹ��� ����)
	
	
	//������ ���� <== ���� �޸� ������ �ּҰ� (Heap ����)
	/*
	*cout << pHuman << '\n';
	*(pHuman + 0) = 3;
	*(pHuman + 1) = 31;
	*pHuman[2] = 29;
	*
	*cout << pHuman[0] << '\n';
	*cout << *(pHuman + 2) << '\n';
	*/


	return 0;
}