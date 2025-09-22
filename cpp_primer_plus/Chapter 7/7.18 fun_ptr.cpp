// fun_ptr.cpp -- pointers to functions
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

double betsy(int);
double pam(int);
void estimate(int lines, double (*pf)(int));

int main() {
  int code;
  cin >> code;
  estimate(code, betsy);
  estimate(code, pam);
  return 0;
}

double betsy(int lns) {
  return 0.05 * lns;
}

double pam(int lns) {
  return 0.3 * lns;
}

void estimate(int lines, double (*pf)(int)) {
  cout << lines << " lines will take " << (*pf)(lines) << " hours" << endl;
}