// filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <fstream>
#include <cstdlib>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: ios_base;
using std :: ofstream;
using std :: ostream;

const int LIMIT = 5;

void file_it(ostream &os, double fo, const double fe[], int n);

int main() {
  ofstream fout;
  const char *fn = "ep-data.txt";
  fout.open(fn);
  if(!fout.is_open()) {
    cout << "Can't open " << fn << ". Bye.\n";
    exit(EXIT_FAILURE);
  }
  double objective;
  cout << "Enter the focal length of your ""telescope objective in mm: ";
  cin >> objective;
  double eps[LIMIT];
  for(int i = 0; i < LIMIT; ++ i) {
    cout << "Eyepiece #" << i + 1 << ": ";
    cin >> eps[i];
  }
  file_it(fout, objective, eps, LIMIT);
  file_it(cout, objective, eps, LIMIT);
  return 0;
}

void file_it(ostream &os, double fo, const double fe[], int n) {
  ios_base :: fmtflags initial;
  initial = os.setf(ios_base :: fixed);
  os.precision(0);
  os << "Focal length of objective: " << fo << " mm\n";
  os.setf(ios_base :: showpoint);
  os.precision(1);
  os.width(12);
  os << "f.1. Eyepiece";
  os.width(15);
  os << "Magnification" << endl;
  for(int i = 0; i < n; ++ i) {
    os.width(12);
    os << fe[i];
    os.width(15);
    os << int(fo / fe[i] + 0.5) << endl;
  }
  os.setf(initial);
}