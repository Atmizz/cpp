// and.cpp -- using the logical AND operator
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int ArSize = 6;

int main() {
  float naaq[ArSize];
  float temp;
  cin >> temp;
  int i = 0;
  while(i < ArSize && temp >= 0) {
    naaq[i] = temp;
    ++ i;
    if(i < ArSize) {
      cout << "Next Value: ";
      cin >> temp;
    }
  }
  if(i == 0) {
    cout << "No data.\n";
  } else {
    cout << "Enter your NAAQ: ";
    float you;
    cin >> you;
    int cnt = 0;
    for(int j = 0; j < i; ++ j) {
      if(naaq[j] > you) {
        ++ cnt;
      }
    }
    cout << cnt;
  }
  return 0;
}