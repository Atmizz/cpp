// carrot.cpp -- food processing program
#include <iostream>

using std :: cout;
using std :: endl;

int main() {
  int carrots; // defining declaration, definition

  carrots = 25;
  cout << "I have ";
  cout << carrots;
  cout << " carrots.";
  cout << endl;
  carrots = carrots - 1; // modify the variable
  cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
  return 0;
}