// num_test.cpp -- use numereic test in for loop
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  cout << "Enter an integer: ";
  int limit;
  cin >> limit;
  for(int i = limit; i >= 0; -- i) {
    cout << "i = " << i << endl;
  }

  return 0;
}