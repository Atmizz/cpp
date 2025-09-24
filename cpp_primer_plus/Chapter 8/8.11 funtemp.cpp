// funtemp.cpp -- using a function template
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

template <typename T>
void Swap(T &a, T &b);

int main() {
  int i = 0, j = 1;
  cout << "i, j = " << i << ", " << j << endl;
  Swap(i, j);
  cout << "After Swap(), i, j = " << i << ", " << j << endl;

  double x = 1.1, y = 2.2;
  cout << "x, y = " << x << ", " << y << endl;
  Swap(x, y);
  cout << "After Swap(), x, y = " << x << ", " << y << endl;
  return 0;
}

template <typename T>
void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}