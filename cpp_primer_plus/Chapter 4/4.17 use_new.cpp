// use_new.cpp -- using the new operator new
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int nights = 1001;
  int *pt = new int;
  *pt = 1001;

  cout << "nights value = " << nights << " at address " << &nights << endl;
  cout << "int value = " << *pt << " at address " << pt << endl;

  double *pd = new double;
  *pd = 100001.0;

  cout << "double value = " << *pd << " at address " << pd << endl;

  cout << "Size of pt = " << sizeof(pt);
  cout << ", size of *pt = " << sizeof(*pt) << endl;

  cout << "Size of pd = " << sizeof(pd);
  cout << ", size of *pd = " << sizeof(*pd) << endl;

  int *ps = new int;
  int *ps2 = ps;
  
  delete ps2;
  
  cout << "ps = " << ps << endl;
  cout << "ps2 = " << ps2 << endl;

  return 0;
}