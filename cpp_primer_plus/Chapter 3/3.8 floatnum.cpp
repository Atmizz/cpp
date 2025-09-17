// floatnum.cpp -- floating-point types
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ios_base;

int main() {
  cout.setf(ios_base :: fixed, ios_base :: floatfield); // fixed-point
  float tub = 10.0 / 3.0;
  double mint = 10.0 / 3.0;
  const float million = 1.0e6;

  cout << "tub = " << tub << endl;
  cout << "a million tubs = " << million * tub << endl;
  cout << "ten million tubs = " << 10 * million * tub << endl;

  cout << "mint = " << mint << endl;
  cout << "a million mints = " << million * mint << endl;
  return 0;
}