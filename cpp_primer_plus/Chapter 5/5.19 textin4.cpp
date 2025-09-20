// textin4.cpp -- reading chars with cin.get()
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int ch;
  int cnt = 0;
  while((ch = cin.get()) != EOF) {
    cout.put(char(ch));
    ++ cnt;
  }
  cout << endl << cnt << endl;
  return 0;
}