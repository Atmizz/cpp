// forstr1.cpp -- using for with a string
#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main() {
  string word;
  cin >> word;

  for(int i = word.size() - 1; i >= 0; -- i) {
    cout << word[i];
  }

  return 0;
}