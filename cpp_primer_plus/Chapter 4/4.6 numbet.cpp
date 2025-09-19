// number.cpp -- following number input with line input
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  cout << "What year was your house built?\n";
  int year;
  // cin >> year;
  (cin >> year).get();
  cout << "What is its street address?\n";
  char address[80];
  cin.getline(address, 80);
  cout << "Year built: " << year << endl;
  cout << "Address: " << address << endl;

  return 0;
}