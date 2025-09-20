// block.cpp -- use a block statement
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  double number;
  double sum = 0.0;
  for (int i = 1; i <= 5; ++ i) {
    cout << "Value " << i << ": ";
    cin >> number;
    sum += number;
  }
  cout << sum << ' ' << sum / 5 << endl;

  return 0;
}