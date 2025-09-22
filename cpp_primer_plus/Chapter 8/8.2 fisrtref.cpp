// firstref.cpp -- defining and using a reference
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int rats = 101;
  int &rodents = rats;
  cout << "rats = " << rats;
  cout << ", rodents = " << rodents << endl;
  rodents ++;
  cout << "rats = " << rats << ", rodents = " << rodents << endl;
  cout << "rats address = " << &rats << ", rodents address = " << &rodents << endl;
  return 0;
}