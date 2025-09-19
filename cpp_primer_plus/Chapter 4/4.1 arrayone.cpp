// arrayone.cpp -- small arrays of integers
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int yams[3];
  yams[0] = 7;
  yams[1] = 8;
  yams[2] = 6;

  int yamcost[3] = {20, 30, 5};

  int things[] = {1, 2, 3, 4, 5};

  cout << "Total yams = ";
  cout << yams[0] + yams[1] + yams[2] << endl;

  cout << "Size of yams array = " << sizeof yams << endl;
  cout << "Size of one element = " << sizeof yams[0] << endl;

  cout << "Size of things array = " << sizeof things << endl;

  int c11[4] {1, 2, 3, 4};
  
  cout << "Size of c11 array = " << sizeof c11 << endl;

  return 0;
}