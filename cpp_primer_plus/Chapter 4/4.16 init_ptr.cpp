// init_ptr.cpp -- initializing a pointer
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int higgens = 5;
  int *pt = &higgens;

  cout << "Value of higgens: " << higgens << endl;
  cout << "Address of higgens: " << &higgens << endl;
  cout << "Value of *pt: " << *pt << endl;
  cout << "Value of pt: " << pt << endl;

  int *pt2;
  pt2 = (int *)0xB8000000;

  return 0;
}