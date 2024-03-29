﻿/************************************************************** 
 * 괄호 표현식을 몇 가지 보여주는 프로그램                    *
***************************************************************/
#include <iostream>
using namespace std;

int main()
{
  // 변수 선언과 초기화
  int x = 4;
  // 첫 번째 표현식
  cout << "괄호가 있는 경우의 값: " <<(x + 3) *  5 << endl; 
  cout << "괄호가 없는 경우의 값: " << x + 3 * 5 << endl << endl;
  // 두 번째 표현식
  cout << "괄호가 있는 경우의 값: " << 12 /(x + 2) << endl;                
  cout << "괄호가 없는 경우의 값: " << 12 /  x + 2;               
  return 0;
}