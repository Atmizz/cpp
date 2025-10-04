// usetime0.cpp -- using the first draft of the Time class
#include <iostream>
#include "11.4 mytime1.h"

int main() {
  using std :: cout;
  using std :: endl;
  Time planning;
  Time coding(2, 40);
  Time fixing(5, 55);
  Time total;

  cout << "Planning time = ";
  planning.Show();
  cout << endl;

  cout << "Coding time = ";
  coding.Show();
  cout << endl;

  cout << "Fixing time = ";
  fixing.Show();
  cout << endl;

  total = coding + fixing;
  cout << "coding + fixing = ";
  total.Show();
  cout << endl;

  Time morefixing(3, 28);
  cout << "morefixing time = ";
  morefixing.Show();
  cout << endl;

  total = morefixing.operator+(total);
  cout << "morefixing.operator+(total) = ";
  total.Show();
  cout << endl;
  return 0;
}