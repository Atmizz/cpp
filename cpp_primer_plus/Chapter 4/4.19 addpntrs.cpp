// addpntrs.cpp -- pointer addition
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  double wages[3] = {10000.0, 20000.0, 30000.0};
  short stacks[3] = {3, 2, 1};
  double *pw = wages;
  short *ps = &stacks[0];

  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  pw = pw + 1;
  cout << "add 1 to the pointer pw:\n";
  cout << "pw = " << pw << ", *pw = " << *pw << endl;
  cout << "ps = " << ps << ", *ps = " << *ps << endl;
  ps += 1;
  cout << "add 1 to the pointer ps:\n";
  cout << "ps = " << ps << ", *ps = " << *ps << endl;

  cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
  cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;

  cout << "sizeof wages array = " << sizeof(wages) << endl;
  cout << "sizeof pw = " << sizeof(pw) << endl;

  return 0;
}