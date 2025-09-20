// express.cpp -- values of expressions
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ios_base;

int main() {
  int x;

  cout << "The expression x = 100 has the value ";
  cout << (x = 100) << endl;
  cout << "Now x = " << x << endl;
  cout << "The expression x < 3 has the value ";
  cout << (x < 3) << endl;
  cout << "The expression x > 3 has the value ";
  cout << (x > 3) << endl;
  cout << "The expression x <= 3 has the value ";
  cout.setf(ios_base :: boolalpha);
  cout << "The expression x < 3 has the value ";
  cout << (x < 3) << endl;
  cout << "The expression x > 3 has the value ";
  cout << (x > 3) << endl;
  if(x = 0) {
    cout << (x = 0);
  }
  return 0;
}