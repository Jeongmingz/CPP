#include <string>
#include <iostream>
using namespace std;

string reverse(const string& orig);     // �Լ� ����

int main()
{
   // ���ڿ� ��ü ����
   string origin;
   string copy_reverse;

   //cout << boolalpha << ("abc" == "abc") << '\n';
   cout << boolalpha; // cout ��ü���� bool Ÿ���� ����� ���ĺ����� ��� (true, false)
   cout << ("abc" == "abc") << '\n';

   // ���ڿ� �Է¹ް� ���
   cout << "���ڿ��� �Է��ϼ���: ";
   getline(cin, origin);
   cout << "���� ���ڿ�: " << origin << endl;

   // ���ڿ� ������ ���
   copy_reverse = reverse(origin);
   cout << "���� (����) ���ڿ�: " << origin << endl;
   cout << "������ ���ڿ�: " << copy_reverse;

   return 0;
}

/**************************************************************
* ������ ���޵� ���ڿ��� ������ �Լ�  *
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