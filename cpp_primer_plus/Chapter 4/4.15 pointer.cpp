// pointer.cpp -- our first pointer variable
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int updates = 6;
  int *p_updates;
  p_updates = &updates;

  cout << "Values: updates = " << updates;
  cout << ", *p_updates = " << *p_updates << endl;

  cout << "Addresses: &updates = " << &updates;
  cout << ", p_updates = " << p_updates << endl;
  
  *p_updates = *p_updates + 1;
  cout << "Now updates = " << updates << endl;

  return 0;
}