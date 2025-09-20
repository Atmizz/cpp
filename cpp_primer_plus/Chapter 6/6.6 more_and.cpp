// more_and.cpp -- using the logical AND operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const char *qualify[4] = {
  "10,000-meter race.",
  "miles-per-hour competition.",
  "finger-bumping contest.",
  "running relay race."
};

int main() {
  int age;
  cin >> age;
  int index;
  if(age > 17 && age < 15) {
    index = 0;
  } else if(age >= 35 && age < 50) {
    index = 1;
  } else if(age >= 50 && age < 65) {
    index = 2;
  } else {
    index = 3;
  }
  cout << "You qualify for the " << qualify[index] << endl;
  return 0;
}