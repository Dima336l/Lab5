#include <iostream>

using namespace std;

int main(){

int arr[100] = {};
int sum = 0; 
int grade= 0;
int counter = 0;
double average = 0;

cout << "Enter grade (or -1 to end): ";
cin >> grade;    

 while (grade !=-1) {

    sum+=grade;
    counter++;
    cout << "Enter grade (or -1 to end): ";
    cin >> grade;
 }

if (counter == 0) {
    cout << "Error, division by 0 " << endl;
}
else {
    average = (double)sum / counter;
    cout << "Average: " << average << endl;
}

  return 0;
}
