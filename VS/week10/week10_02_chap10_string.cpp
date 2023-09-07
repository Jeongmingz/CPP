#include <string>
#include <iostream>
using namespace std;

string reverse(const string& orig);     // 함수 선언

int main()
{
   // 문자열 객체 선언
   string origin;
   string copy_reverse;

   //cout << boolalpha << ("abc" == "abc") << '\n';
   cout << boolalpha; // cout 객체에게 bool 타입의 결과를 알파벳으로 출력 (true, false)
   cout << ("abc" == "abc") << '\n';

   // 문자열 입력받고 출력
   cout << "문자열을 입력하세요: ";
   getline(cin, origin);
   cout << "원본 문자열: " << origin << endl;

   // 문자열 뒤집고 출력
   copy_reverse = reverse(origin);
   cout << "원본 (유지) 문자열: " << origin << endl;
   cout << "뒤집은 문자열: " << copy_reverse;

   return 0;
}

/**************************************************************
* 참조로 전달된 문자열을 뒤집는 함수  *
**************************************************************/
string reverse(const string& orig) // orig => read only
{
   string temp(orig); // dynamic allocation
   int size = orig.size();
   int i;
   for (i = 0; i < size; i++)
   {
       temp[i] = orig[size - 1 - i];
   }
   temp[i+1] = '\0';
   return temp;
}