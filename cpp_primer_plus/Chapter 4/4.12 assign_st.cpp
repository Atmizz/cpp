// assign_st.cpp -- assignning structures
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

struct inflatable {
  char name[20];
  float volume;
  double price;
};

struct perks {
  int key_number;
  char car[12];
} mr_glitz = {
  7,
  "Challenger"
};

int main() {
  inflatable bouquet = {
    "sunflowers",
    0.20,
    12.49
  };
  inflatable choice;

  cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;
  choice = bouquet;
  cout << "choice: " << choice.name << " for $" << choice.price << endl;

  return 0;
}