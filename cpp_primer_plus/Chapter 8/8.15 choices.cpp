// choices.cpp -- choosing a template
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

template <class T>
T lesser(T a, T b) {
  return a < b ? a : b;
}

int lesser(int a, int b) {
  return a < b ? a : b;
}

int main() {
  int m = 20;
  int n = 30;
  double x = 15.5;
  double y = 25.5;

  cout << lesser(m, n) << endl;
  cout << lesser(x, y) << endl;
  cout << lesser<>(m, n) << endl;
  cout << lesser<int>(x, y) << endl;

  return 0;
}