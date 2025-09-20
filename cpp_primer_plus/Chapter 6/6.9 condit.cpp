// condit.cpp -- using the conditional operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int a, b;
  cin >> a >> b;
  int c = a > b ? a : b;
  cout << "The larger of " << a << " and " << b << " is " << c << endl;
  return 0;
}