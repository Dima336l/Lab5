#include <iostream>

using namespace std;

int main(){

cout << "Enter two numbers: ";
int a,b,sum = 0;
cin >> a >> b;

for (int i = a; i<=b ; i++) {
    sum+=i;
}

cout << "Sum from " << a << " to " << b << " is " << sum << endl;
  return 0;
}