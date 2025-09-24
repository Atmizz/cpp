// twofile1.cpp -- variables with external and internal linkage
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int tom = 3, dick = 30;
static int harry = 300;

void remote_access();

int main() {
  cout << "main() reports the following addresses: \n";
  cout << &tom << " = &tom, " << &dick << " = &dick, " << &harry << " = &harry\n";
  remote_access();
  return 0;
}