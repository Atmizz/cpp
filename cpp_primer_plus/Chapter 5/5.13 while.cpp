//while.cpp -- introducing the while loop
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 20;

int main() {
  char name[ArSize];
  cout << "Enter your name: ";
  cin >> name;
  cout << "Here is your name: ";
  int i = 0;
  while(name[i] != '\0') {
    cout << name[i] << " : " << (int) name[i] << endl;
    ++ i;
  }
  return 0;
}