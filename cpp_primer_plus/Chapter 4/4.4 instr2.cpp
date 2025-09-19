// instr2.cpp -- reading more than one word with getline()
#include <iostream>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 20;

int main() {
  char name[ArSize];
  char dessert[ArSize];

  cout << "Enter your name:\n";
  cin.getline(name, ArSize);
  cout << "Enter your favorite dessert:\n";
  cin.getline(dessert, ArSize);
  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << ".\n";

  return 0;
}