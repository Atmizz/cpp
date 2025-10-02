// usestock2.cpp -- using the Stock class
#include <iostream>
#include "10.4stock10.h"

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  {
    cout << "Using constructions to create new objects\n";
    Stock stock1("NanoSmart", 20, 12.50);
    stock1.show();
    Stock stock2 = Stock("Boffo Objects", 2, 2.0);
    stock2.show();

    cout << "Assigning stock1 to stock2:\n";
    stock2 = stock1;
    cout << "Listing both objects:\n";
    stock1.show();
    stock2.show();

    cout << "Using a constructor to reset an object\n";
    stock1 = Stock("Nifty Foods", 10, 50.0);
    cout << "Revised stock1:\n";
    stock1.show();
  }
  return 0;
}