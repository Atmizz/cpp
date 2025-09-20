// cctypes.cpp -- using the ctype.h library
#include <iostream>
#include <cctype>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  char ch;
  int whitespace = 0, digits = 0, chars = 0, punct = 0, others = 0;
  cin.get(ch);
  while(ch != '@') {
    if(isalpha(ch)) {
      chars ++;
    } else if(isspace(ch)) {
      whitespace ++;
    } else if(isdigit(ch)) {
      digits ++;
    } else if(ispunct(ch)) {
      punct ++;
    } else {
      others ++;
    }
    cin.get(ch);
  }
  cout << "chars = " << chars << endl
       << "whitespace = " << whitespace << endl
       << "digits = " << digits << endl
       << "punct = " << punct << endl
       << "others = " << others << endl;

  cout << char(tolower('A')) << endl;
  return 0;
}