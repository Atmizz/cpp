// calling.cpp -- defining, prototyping, and calling a function
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void simple();

int main() {
  cout << "The program can do only one thing.\n";
  simple();
  cout << "main() is finished, bye.\n";
  return 0;
}

void simple() {
  cout << "I'm but a simple function.\n";
}