// textin2.cpp -- using cin.get(char)
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  int cnt = 0;
  cin.get(ch);
  while(ch != '#') {
    cout << ch;
    ++ cnt;
    cin.get(ch);
  }
  cout << endl << cnt;
  return 0;
}