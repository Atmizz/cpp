// forstr2.cpp -- reversing an array
#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main() {
  cout << "Enter a word: ";
  string word;
  cin >> word;

  char temp;
  for(int i = word.size() - 1, j = 0; j < i; -- i, ++ j) {
    temp = word[i];
    word[i] = word[j];
    word[j] = temp;
  }
  cout << word << endl;

  return 0;
}