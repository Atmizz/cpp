// string.cpp -- storing strings in an array
#include <iostream>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;

const int Size = 15;

int main() {
  char name1[Size];
  char name2[Size] = "C++owboy";

  cin >> name1;

  cout << "Howdy! I'm " << name2 << endl;
  cout << strlen(name2) << " characters long.\n";
  cout << "And you are " << name1 << endl;

  name2[3] = '\0';
  cout << "Here are the first 3 characters of my name: " << name2 << endl;


  return 0;
}