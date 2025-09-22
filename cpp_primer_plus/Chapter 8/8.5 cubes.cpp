// cubes.cpp -- regular and reference arguments
#include <iostream>
#include <cmath>

using std :: cin;
using std :: cout;
using std :: endl;

double cube(double a);
double refCube(double &ra);

int main() {
  double x = 3.0;
  cout << cube(x) << endl;
  cout << refCube(x) << endl;
  cout << x << endl;

  double && rref = std :: sqrt(36.00);
  cout << rref << endl;
  return 0;
}

double cube(double a) {
  a *= a * a;
  return a;
}

double refCube(double &ra) {
  ra *= ra * ra;
  return ra;
}