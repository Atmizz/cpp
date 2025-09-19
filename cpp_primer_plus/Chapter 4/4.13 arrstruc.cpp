// arrstruc.cpp -- an array of structures
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

struct inflatable {
  char name[20];
  float volume;
  double price;
};

int main() {
  inflatable guests[2] = {
    {
      "Glorious Gloria",
      1.88,
      29.99
    },
    {
      "Audacious Arthur",
      3.12,
      32.99
    }
  };

  cout << "Expand your guest list with " << guests[0].name;
  cout << " and " << guests[1].name << "!\n";

  return 0;
}