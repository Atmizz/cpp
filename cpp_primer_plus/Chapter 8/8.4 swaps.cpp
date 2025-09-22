// swaps.cpp -- swapping with references and with pointers
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void swapr(int &a, int &b);
void swapp(int *p, int *q);
void swapv(int a, int b);

int main() {
  int a = 300, b = 400;
  swapr(a, b);
  cout << "a = " << a << ", b = " << b << endl;
  swapp(&a, &b);
  cout << "a = " << a << ", b = " << b << endl;
  swapv(a, b);
  cout << "a = " << a << ", b = " << b << endl;
  return 0;
}

void swapr(int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void swapp(int *q, int *p) {
  int temp;
  temp = *q;
  *q = *p;
  *p = temp;
}

void swapv(int a, int b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}