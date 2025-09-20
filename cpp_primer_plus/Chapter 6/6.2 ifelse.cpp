// ifelse.cpp -- using the if else statement
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;

  cin.get(ch);
  while(ch != '.') {
    if(ch == '\n') {
      cout << ch;
    } else {
      cout << ++ ch;
    }
    cin.get(ch);
  }
  return 0;
}