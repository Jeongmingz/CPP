// week05_01_chap09_memory.cpp
#include <iostream>
using namespace std;

int main() {
	int humans = 0;
	cout << "몇 분이세요 ? ";
	cin >> humans;

	cout << humans << '\n';

	int* pHuman = new int[humans];
	
	for (int i = 0; i < humans; i++) {
		cout << "나이가 어떻게 되시나요 ?";
		cin >> pHuman[i];
	}

	int total = 0;

	cout << "나이 확인 하겠습니다 ~ \n";
	for (int k = 0; k < humans; k++) {
		int age = 0;
		age = pHuman[k];
		
		

		if (age < 8) {
			cout << age << "세 :5000 (어린이)\n";
			total = total + 5000;
		}
		else if (age < 20) {
			cout << age << "세 :10000 (청소년)\n";
			total = total + 10000;
		}
		else if (age >= 20) {
			cout << age << "세 :20000 (성인)\n";
			total = total + 20000;
		}
		else {
			cout << "정상적인 나이가 아닙니다.";
			break;
		}			
	}

	cout << "\n총 금액은 " << total << "입니다.";

	//cout << sizeof(*pHuman) * humans;
	
	delete pHuman; // 힙 메모리공간에 동적 할당된 객체 제거. (소멸자 동작)
	
	
	//포인터 변수 <== 동적 메모리 공간의 주소값 (Heap 영역)
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