// hexoct.cpp -- shows hex and octal literals
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {

  int chest = 42;   // decimal integer literal
  int waist = 0x42; // hexadecimal integer literal
  int inseam = 042; // octal integer literal

  cout << "chest = " << chest << " {42 in decimal}" << endl;
  cout << "waist = " << waist << " {0x42 in hex}" << endl;
  cout << "inseam = " << inseam << "{042 in octal}" << endl; 

  return 0;
}