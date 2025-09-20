// plus_one.cpp -- the increment operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int a = 20;
  int b = 30;

  cout << "a = " << a << ", b = " << b << endl;
  cout << "a++ = " << a ++ << endl;
  cout << "++b = " << ++ b << endl;
  cout << "Now a = " << a << ", b = " << b << endl;

  return 0;
}