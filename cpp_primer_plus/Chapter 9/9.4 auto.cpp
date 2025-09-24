// autoscp.cpp -- illustrating scope of automative variables
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void oil(int x);

int main() {
  int texas = 31;
  int year = 1998;
  cout << "In main(), texas = " << texas << endl;
  cout << "&texas = " << &texas << endl;
  cout << "year = " << year << endl;
  cout << "&year = " << &year << endl;
  oil(texas);
  cout << "In main(), texas = " << texas << endl;
  cout << "&texas = " << &texas << endl;
  cout << "year = " << year << endl;
  cout << "&year = " << &year << endl;
  return 0;
}

void oil(int x) {
  int texas = 5;

  cout << "In oil(), texas = " << texas << endl;
  cout << "&texas = " << &texas << endl;

  cout << "x = " << x << endl;
  cout << "&x = " << &x << endl;

  {
    int texas = 113;
    cout << "Inner texas = " << texas << endl;
    cout << "&texas = " << &texas << endl;
    cout << "x = " << x << endl;
    cout << "&x = " << &x << endl;
  }
  cout << "Outer texas = " << texas << endl;
  cout << "&texas = " << &texas << endl;
}