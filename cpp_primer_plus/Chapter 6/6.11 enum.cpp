// enum.cpp -- using enum
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

enum {
  red, orange, yellow, green, blue, violet, indigo
};

int main() {
  int code;
  cin >> code;
  while(code >= red && code <= indigo) {
    switch(code) {
      case red: cout << "Roses are red.\n"; break;
      case orange: cout << "Orange is the new black.\n"; break;
      case yellow: cout << "Sunflowers are yellow.\n"; break;
      case green: cout << "Have you seen the greenery?\n"; break;
      case blue: cout << "Cold rain inebriates the soul.\n"; break;
      case violet: cout << "Violets are blue.\n"; break;
      case indigo: cout << "Indigo is a color.\n"; break;
    }
    cout << "Enter a number between 0 and 6, or 7 to quit: ";
    cin >> code;
  }
  cout << "Bye.\n";
  return 0;
}