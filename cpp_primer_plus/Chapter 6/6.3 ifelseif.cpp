// ifelseif.cpp -- using if else if else
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int Fave = 27;

int main() {
  int n;
  do {
    cin >> n;
    if(n < Fave) {
      cout << "Too low\n";
    } else if(n > Fave) {
      cout << "Too high\n";
    } else {
      cout << Fave << " is right.\n";
    }
  } while(n != Fave);
  return 0;
}