﻿/**************************************************************
 * Array 클래스를 사용하는 애플리케이션                     *
 **************************************************************/
#include "array.h"

int main()
{
  // 3개의 요소를 가지는 Array 클래스 인스턴스화
  Array arr(3);
  // [ ] 연산자로 값 저장
  arr[0] = 22.31;
  arr[1] = 78.61;
  arr[2] = 65.22;
  // [] 연산자로 값 추출    
  for(int i = 0; i < 3; i++)
  {
    cout << "arr[" << i <<"]: " << arr[i] << endl;
  }
  return 0;
}