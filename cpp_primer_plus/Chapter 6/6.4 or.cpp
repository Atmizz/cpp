// or.cpp -- using the logical OR operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  cin >> ch;
  if(ch == 'y' || ch == 'Y') {
    cout << "You are warned!\n";
  } else if(ch == 'n' || ch == 'N') {
    cout << "A wise choice...\n";
  } else {
    cout << "The wrong answer.\n";
  }
  return 0;
}