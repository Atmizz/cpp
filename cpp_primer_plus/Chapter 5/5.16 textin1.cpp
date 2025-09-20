// textin.cpp -- reading cahrs with a while loop
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  int count = 0;
  cin >> ch;
  while(ch != '#') {
    cout << ch;
    ++ count;
    cin >> ch;
  }
  cout << endl << count;
  return 0;
}