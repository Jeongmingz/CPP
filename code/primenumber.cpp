// prime number check v.06
#include <iostream>
using namespace std;

int main() {
  bool isPrime = true;
  int number;
  cin >> number;
  if(number <= 1){
    isPrime = false;
  }
  else{
    for(int i = 2 ; i < number/2 ; i++){
      if(number%i == 0){
        isPrime = false;
        break;
      }
    }
  }
  
  if(isPrime)
    cout << number << " 는 소수입니다.\n";
  else
    cout << number << " 는 소수가 아닙니다.\n";
  
  return 0;
}