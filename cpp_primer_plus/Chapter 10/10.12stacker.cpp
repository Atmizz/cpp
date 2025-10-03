// stacker.cpp -- testing the Stack class
#include <iostream>
#include <cctype>
#include "10.10 stack.h"

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  Stack st;
  char ch;
  unsigned long po;
  cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
  while(cin >> ch && toupper(ch) != 'Q') {
    while(cin.get() != '\n') {
      continue ;
    }
    if(!isalpha(ch)) {
      cout << '\a';
      continue ;
    }
    switch(ch) {
      case 'A':
      case 'a':
        cout << "Enter a PO number: ";
        cin >> po;
        if(st.isFull()) {
          cout << "Stack already full\n";
        } else {
          st.push(po);
        }
        break;
      case 'P':
      case 'p':
        if(st.isEmpty()) {
          cout << "Stack already empty\n";
        } else {
          st.pop(po);
          cout << "PO #" << po << " popped\n";
        }
        break;
    }
    cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
  }
}