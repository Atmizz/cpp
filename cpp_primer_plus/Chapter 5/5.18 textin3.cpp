// textin3.cpp -- reading chars to end of file
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  int cnt = 0;
  cin.get(ch);
  while(cin.fail() == false) {
    cout << ch;
    ++ cnt;
    cin.get(ch);
  }
  cout << endl << cnt;
  return 0;
}