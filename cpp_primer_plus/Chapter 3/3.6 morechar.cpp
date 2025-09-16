// morechar.cpp -- the char type and int type constrasted
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch = 'M';
  int i = ch;
  
  cout << "The ASCII code for " << ch << " is " << i << endl;
  ch = ch + 1;
  i = ch;
  cout << "The ASCII code for " << ch << " is " << i << endl;

  cout << "Displaying char ch using cout.put(): ";
  cout.put(ch);
  cout.put('!');
  cout << endl;

  cout << '#' << endl;
  cout.put('#');
  
  return 0;
}