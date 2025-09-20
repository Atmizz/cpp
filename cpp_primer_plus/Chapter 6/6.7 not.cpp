// more_and.cpp -- using the logical AND operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

bool is_int(double);

int main() {
  double num;
  cin >> num;
  while(!is_int(num)) {
    cout << "Out of range -- please try again:";
    cin >> num;
  }
  int val = int(num);
  cout << "You've entered " << val << endl;
  return 0;
}

bool is_int(double x) {
  if(x <= INT_MAX && x >= INT_MIN) {
    return true;
  }
  return false;
}