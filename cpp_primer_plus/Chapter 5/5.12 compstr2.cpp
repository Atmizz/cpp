// compstr2.cpp -- comparing strings using arrays
#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main() {
  string word = "?ate";

  for (char ch = 'a'; word != "mate"; ++ ch) {
    cout << word << endl;
    word[0] = ch;
  }
  cout << "After loop ends, word is " << word << endl;

  return 0;
}