//dfelete.cpp -- using the delete operator
#include <iostream>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;

char *getName(void);

int main() {
  char *name;

  name = getName();
  cout << name << " at " << (int *) name << endl;
  delete[] name;

  name = getName();
  cout << name << " at " << (int *) name << endl;
  delete[] name;

  return 0;
}

char *getName(void) {
  char temp[80];
  cout << "Enter last name: ";
  cin >> temp;
  char *pn = new char[strlen(temp) + 1];
  strcpy(pn, temp);
  return pn;
}