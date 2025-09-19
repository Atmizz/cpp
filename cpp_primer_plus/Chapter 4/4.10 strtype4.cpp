// strtype4.cpp -- line input
#include <iostream>
#include <string>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main() {
  char charr[20];
  string str;

  cout << "Enter a line of text:\n";
  cin.getline(charr, 20);
  cout << "You entered: " << charr << endl;
  cout << "Enter another line of text:\n";
  getline(cin, str);
  cout << "You entered: " << str << endl;

  return 0;
}