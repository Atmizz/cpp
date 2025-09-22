// strgfun.cpp -- functions with a string argument
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

unsigned int c_in_str(const char *str, char ch);

int main() {
  char mmm[15] = "minimum";
  char *wail = "ululate";

  unsigned int ms = c_in_str(mmm, 'm');
  unsigned int ws = c_in_str(wail, 'u');
  cout << ms << " m characters in " << mmm << endl;
  cout << ws << " u characters in " << wail << endl;
  return 0;
}

unsigned int c_in_str(const char *str, char ch) {
  unsigned int cnt = 0;
  while(*str) {
    if(*str == ch) {
      cnt ++;
    }
    str ++;
  }
  return cnt;
}