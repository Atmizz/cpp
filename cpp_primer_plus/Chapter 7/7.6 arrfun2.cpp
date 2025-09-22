// arrfun2.cpp -- functions with an array argument
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main() {
  int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
  
  cout << cookies << " = array address\n";
  cout << sizeof cookies << " = sizeof cookies\n";
  int sum = sum_arr(cookies, ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  sum = sum_arr(cookies, 3);
  cout << "First three eaters: " << sum << endl;
  sum = sum_arr(cookies + 4, 4);
  cout << "Last four eaters: " << sum << endl;
  return 0;
}

int sum_arr(int arr[], int n) {
  cout << arr << " = arr\n";
  cout << sizeof arr << " = sizeof arr\n";
  int total = 0;
  for(int i = 0; i < n; ++ i) {
    total += arr[i];
  }
  return total;
}