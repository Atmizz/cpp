// arrfun3.cpp -- array functions and const
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main() {
  double properties[Max];
  int size = fill_array(properties, Max);
  show_array(properties, size);
  if(size > 0) {
    cout << "Enter revaluation factor: ";
    double factor;
    while(!(cin >> factor)) {
      cin.clear();
      while(cin.get() != '\n') {
        continue ;
      }
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, size);
    show_array(properties, size);
  }
  cout << "Done.\n";
  cin.get();
  cin.get();
  return 0;
}

int fill_array(double ar[], int limit) {
  double temp;
  int i = 0;
  for(; i < limit; ++ i) {
    cout << "Enter value #" << (i + 1) << ": ";
    cin >> temp;
    if(!cin) {
      cin.clear();
      while(cin.get() != '\n') {
        continue;
      }
      cout << "Bad input; input process terminated.\n";
      break;
    } else if(temp < 0) {
      break;
    }
  }
  return i;
}

void show_array(const double ar[], int n) {
  for(int i = 0; i < n; ++ i) {
    cout << "Property #" << (i + 1) << ": $" << ar[i] << endl;
  }
}

void revalue(double r, double ar[], int n) {
  for(int i = 0; i < n; ++ i) {
    ar[i] *= r;
  }
}