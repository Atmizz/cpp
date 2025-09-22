// secref.cpp -- defining and using a reference
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int rats = 101;
  int &rodents = rats;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  cout << "rats = " << rats << ", rodents = " << rodents << endl;
  cout << "rats address = " << &rats << ", rodents address = " << &rodents << endl;

  int bunnies = 50;
  rodents = bunnies;
  cout << "bunnies = " << bunnies;
  cout << ", rats = " << rats;
  cout << ", rodents = " << rodents << endl;

  cout << "bunnies address = " << &bunnies << endl;
  cout << "rodents address = " << &rodents << endl;
  return 0;
}