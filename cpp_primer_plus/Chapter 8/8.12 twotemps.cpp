// twotemp.cpp -- using overload template functions
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

template <typename T>
void Swap(T &a, T &b);
template <typename T>
void Swap(T *a, T *b, int n);
void Show(int a[]);

const int Lim = 8;

int main() {
  int i1 = 10, i2 = 20;
  cout << "i1, i2 = " << i1 << ", " << i2 << ".\n";
  cout << "Using compiler-generated int swapper:\n";
  Swap(i1, i2);
  cout << "Now i1, i2 = " << i1 << ", " << i2 << ".\n";
  int d1[Lim] = {0, 1, 2, 3, 4, 5, 6, 7};
  int d2[Lim] = {7, 6, 5, 4, 3, 2, 1, 0};
  Show(d1);
  Show(d2);
  Swap(d1, d2, Lim);
  cout << "Now d1, d2 = \n";
  Show(d1);
  Show(d2);

  return 0;
}

template <typename T>
void Swap(T &a, T &b) {
  T temp;
  temp = a;
  a = b;
  b = temp;
}

template <typename T>
void Swap(T *a, T *b, int n) {
  T temp;
  for (int i = 0; i < n; i++) {
    temp = a[i];
    a[i] = b[i];
    b[i] = temp;
  }
}

void Show(int a[]) {
  for (int i = 0; i < Lim; i++)
    cout << a[i] << " ";
  cout << endl;
}