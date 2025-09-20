// newstrct.cpp -- using new with a structure
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
  inflatable *ps = new inflatable;
  cout << "Enter name of inflatable item: ";
  cin.get(ps->name, 20);
  cout << "Enter volume in cubic feet: ";
  cin >> (*ps).volume;
  cout << "Enter price: $";
  cin >> ps->price;
  cout << "Item: " << (*ps).name << endl;
  cout << "Volume: " << ps->volume << " cubic feet\n";
  cout << "Price: $" << ps->price << endl;

  return 0;
}