// choices.cpp -- array variations
#include <iostream>
#include <array>
#include <vector>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: array;
using std :: vector;

int main() {
  double a1[4] = {1.2, 2.4, 3.6, 4.8};
  vector <double> a2(4);
  a2[0] = 1.2;
  a2[1] = 2.4;
  a2[2] = 3.6;
  a2[3] = 4.8;
  array <double, 4> a3 = {1.2, 2.4, 3.6, 4.8};
  array <double, 4> a4;
  a4 = a3;

  cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
  cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
  cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
  cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;

  a1[-2] = 20.0;
  cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;

  return 0;
}