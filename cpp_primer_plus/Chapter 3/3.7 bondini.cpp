// bondini.cpp -- using escape sequences
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  cout << "\aOperation \"HyperHype\" is now activated!\n";
  cout << "Enter your agent code: ______\b\b\b\b\b\b";
  
  long code;

  cin >> code;
  cout << "\aYou entered " << code << "...\n";
  cout << "\aCode verified! Proceed with Plan Z3!\n";

  return 0;
}