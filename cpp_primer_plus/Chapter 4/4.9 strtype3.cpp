// strtype3.cpp -- more string class features
#include <iostream>
#include <string>
#include <cstring>

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

int main() {
  char charr1[20];
  char charr2[20] = "jaguar";
  string str1;
  string str2 = "panther";

  // assignment
  str1 = str2;
  strcpy(charr1, charr2);

  // appending
  str1 += " paste";
  strcat(charr1, " juice");

  // finding length
  int len1 = str1.size();
  int len2 = strlen(charr1);

  cout << "The string " << str1 << " contains " << len1 << " characters.\n";
  cout << "The string " << charr1 << " contains " << len2 << " characters.\n";

  return 0;
}