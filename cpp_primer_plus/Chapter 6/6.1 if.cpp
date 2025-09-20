// if.cpp -- using the if statement
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  int spaces = 0;
  int total = 0;
  cin.get(ch);
  while(ch != '.') {
    if(ch == ' ') {
      ++ spaces;
    }
    ++ total;
    cin.get(ch);
  }
  cout << "spaces : " << spaces << endl;
  return 0;
}