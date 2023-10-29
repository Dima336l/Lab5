#include <iostream>

using namespace std;

int main(){

  cout << "Enter a number you want to find the prime number up to: ";
  
  int num = 0;
  cin >> num;
  
  if ( (num == 0) || (num == 1) ) {
      cout << "No primes found" << endl;
  } else {
      cout << "Primes up to " << num << " are: ";
      for (int i = 2; i <= num; i++) {
          bool isPrime = true;
          for (int j = i; j > 2; j--) {
              if ((i % 2) == 0) {
                  isPrime = false;
                  break;
              }
          }
          if (isPrime == true) {
              cout << i << " ";
          }
      }
  }
      
  return 0;
}
