// dowhile.cpp -- exit-condition loop
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int n;
  do {
    cin >> n;
  } while(n != 7);
  cout << "Yes, 7 is my favorite!";
  
  return 0;
}