// modulus.cpp -- uses & operator to convert lbs to stone
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  const int lbs_per_stn = 14;
  int lbs;

  cout << "Enter your weight in pounds: ";
  cin >> lbs;
  int stone = lbs / lbs_per_stn;
  int pounds = lbs % lbs_per_stn;
  cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds.\n";
  cout << "Done.\n";


  return 0;
}