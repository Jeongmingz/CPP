﻿/**************************************************************
 * strtok 함수를 사용해서                                     *
 * 날짜 형식을 추출하는 프로그램                              *
 **************************************************************/
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
  // 문자열과 포인터 선언
  char str[] = "2020년 12월 09일";
  char* p;
  // 단어 추출
  p = strtok(str, "");  // 첫 번째 호출
  while(p)
  {
    cout << p << endl;
    p = strtok(0, "");  // 나머지 호출
  }
  return 0;
} 