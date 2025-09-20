// ptrstr.cpp -- using pointers to strings
#include <iostream>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char animal[20] = "bear";
  const char *bird = "wren";
  char *ps;

  cout << animal << " and " << bird << endl;
  cout << "Enter a kind of animal: ";
  cin >> animal;
  
  ps = animal;
  cout << ps << "!\n";

  cout << "Before using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;

  ps = new char[strlen(animal) + 1];
  strcpy(ps, animal);

  cout << "After using strcpy():\n";
  cout << animal << " at " << (int *)animal << endl;
  cout << ps << " at " << (int *)ps << endl;

  return 0;
}