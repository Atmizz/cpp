// formore.cpp -- more looping with for
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 16;

int main() {
  long long factorials[ArSize];
  factorials[1] = factorials[0] = 1LL;
  for (int i = 2; i < ArSize; ++ i) {
    factorials[i] = factorials[i-1] * i;
  }
  for(int i = 0; i < ArSize; ++ i) {
    cout << i << "! = " << factorials[i] << endl;
  }

  return 0;
}