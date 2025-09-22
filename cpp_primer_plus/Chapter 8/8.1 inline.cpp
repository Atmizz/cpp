// inline.cpp -- using an inline function
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

inline double square(double x) {
  return x * x;
}

int main() {
  double c = 13;
  double a = square(5.0);
  double b = square(4.0 + 3.0);
  cout << "a = " << a << ", b = " << b << endl;
  cout << "c = " << c << ": square(c) = " << square(c) << endl;
  return 0;
}