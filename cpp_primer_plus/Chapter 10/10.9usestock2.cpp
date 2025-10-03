// usestock2.cpp -- using the Stock class
#include <iostream>
#include "10.7stock20.h"

using std :: cin;
using std :: cout;
using std :: endl;

const int STKS = 4;

int main() {
  Stock stocks[STKS] = {
    Stock("NanoSmart", 12, 20.0),
    Stock("Boffo Objects", 200, 2.0),
    Stock("Monolithic Obelisks", 130, 3.25),
    Stock("Fleep Enterprises", 60, 6.5)
  };
  cout << "Stocks holding:\n";
  for(int i = 0; i < STKS; ++ i) {
    stocks[i].show();
  }
  const Stock *top = &stocks[0];
  for(int i = 1; i < STKS; ++ i) {
    top = &top->topval(stocks[i]);
  }
  cout << "Most valuable holding:\n";
  top->show();
  return 0;
}