// twofile2.cpp -- variables with internal and external linkage
#include <iostream>

using std :: cout;
using std :: endl;

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access() {
  cout << "remote_access():" << endl;
  cout << "&tom: " << &tom << endl;
  cout << "&dick: " << &dick << endl;
  cout << "&harry: " << &harry << endl;
}