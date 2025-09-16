// hexoct2.cpp -- display values in hex and octal
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: hex;
using std :: oct;

int main() {
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "chest = " << chest << " {42 in decimal}" << endl;
  cout << hex; // manipulator for hex mode
  cout << "waist = " << waist << " {0x42 in hex}" << endl;
  cout << oct; // manipulator for octal mode
  cout << "inseam = " << inseam << " {042 in octal}" << endl;

  return 0;
}