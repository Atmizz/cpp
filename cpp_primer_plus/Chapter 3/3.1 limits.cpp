// limits.cpp -- some integer limits
#include <iostream>
#include <climits>

using std :: cout;
using std :: endl;

int main() {
  int n_int = INT_MAX;
  short n_short = SHRT_MAX;
  long n_long = LONG_MAX;
  long long n_llong = LLONG_MAX;

  // sizeof operator
  cout << "int is " << sizeof (int) << " bytes." << endl;
  cout << "short is " << sizeof n_short << " bytes." << endl;
  cout << "long is " << sizeof n_long << " bytes." << endl;
  cout << "long long is " << sizeof n_llong << " bytes." << endl;
  cout << endl;

  cout << "Maximum values:" << endl;
  cout << "int: " << n_int << endl;
  cout << "short: " << n_short << endl;
  cout << "long: " << n_long << endl;
  cout << "long long: " << n_llong << endl;
  cout << endl;

  cout << "Minimum int value = " << INT_MIN << endl;
  cout << "Bits per byte = " << CHAR_BIT << endl;

  int wrens(432);
  int a = {12};
  int b {13};
  int c = {};
  int d {};
  cout << "wrens: " << wrens << endl;
  return 0;
}