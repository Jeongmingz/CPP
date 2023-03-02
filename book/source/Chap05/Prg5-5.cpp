﻿/**************************************************************
 * 센티넬 제어 while 반복문을                                 *
 * 사용해서 숫자들의 합 찾기                                  *
 **************************************************************/
#include <iostream>
using namespace std;

int main()  
{
  // 선언
  int sum = 0;
  int num;
  // 입력받고 반복문 돌리기
  cout << "정수를 입력하세요(종료하려면 -1 입력): ";
  cin >> num;
  while(num != -1)
  {
    sum = sum + num;
    cout << "정수를 입력하세요(종료하려면 -1 입력): "; 
    cin >> num ; // 센티넬 변경
  } 
  // 결과 출력
  cout << "합 = " << sum;
  return 0;
}