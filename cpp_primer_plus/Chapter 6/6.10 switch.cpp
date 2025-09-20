// switch.cpp -- using the switch statement
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

void showMenu();
void report();
void comfort();

int main() {
  showMenu();
  int choice;
  cin >> choice;
  while(choice != 5) {
    switch(choice) {
      case 1: cout << "\a\n"; break;
      case 2: report(); break;
      case 3: cout << "The boss was in all day.\n"; break;
      case 4: comfort(); break;
      default: cout << "That's not a choice.\n";
    }
    showMenu();
    cin >> choice;
  }
  cout << "Bye\n";
  return 0;
}

void showMenu() {
  cout << "Please enter 1, 2, 3, 4, or 5:\n"
       << "1) alarm\n"
       << "2) report\n"
       << "3) alibi\n"
       << "4) comfort\n"
       << "5) quit\n";
}

void report() {
  cout << "It's been an excellent week for business.\n"
       << "Sales are up 120%. Expenses are down 35%.\n";
}

void comfort() {
  cout << "I'm glad my draftsmen are on site.\n";
}