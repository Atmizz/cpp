// recur.cpp -- using recursion
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void countDown(int n);

int main() {
  countDown(4);
  return 0;
}

void countDown(int n) {
  cout << "Count... " << n << endl;
  if(n > 0) {
    countDown(n - 1);
  }
  cout << n << ": Kaboom!\n";
}