// getinfo.cpp -- input and output
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int carrots;

  cout << "How many carrots do you have?" << endl;
  cin >> carrots;
  carrots = carrots + 2;
  cout << "Now you have " << carrots << " carrots." << endl;
}