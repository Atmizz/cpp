// nested.cpp -- nested loops and 2-D array
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

const int Cities = 5;
const int Years = 4;

int main() {
  const char *cities[Cities] = {
    "Gribble City",
    "Gribbletown",
    "New Gribble",
    "San Gribble",
    "Gribble Vista"
  };

  int maxTemps[Years][Cities] = {
    {96, 100, 87, 101, 105},
    {1, 2, 3, 3, 5},
    {2, 3, 4, 5, 6},
    {4, 4, 5, 7, 7}
  };

  cout << "Maximum temperatures for 2008 - 2011\n";
  for(int city = 0; city < Cities; ++ city) {
    cout << cities[city] << '\t';
    for(int year = 0; year < Years; ++ year) {
      cout << maxTemps[year][city] << "\t";
    }
    cout << endl;
  }
  return 0;
}