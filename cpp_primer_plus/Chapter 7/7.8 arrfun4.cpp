// arrfun4.cpp -- functions with an array range
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 8;

int sum_arr(const int *begin, const int *end);

int main() {
  int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
  int sum = sum_arr(cookies, cookies + ArSize);
  cout << "Total cookies eaten: " << sum << endl;
  sum = sum_arr(cookies, cookies + 3);
  cout << "First three eaters ate " << sum << " cookies.\n";
  return 0;
}

int sum_arr(const int *begin, const int *end) {
  const int *pt;
  int total = 0;
  for (pt = begin; pt != end; pt++) {
    total = total + *pt;
  }
  return total;
}