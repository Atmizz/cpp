// exceed.cpp -- exceeding some integer limits
#include <iostream>

#define ZERO 0

#include <climits>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  short sam = SHRT_MAX;
  unsigned short sue = sam;
  cout << "Sam has " << sam << " dollars and Sue has " << sue
    << " dollars deposited." << endl
    << "Add $1 to each account." << endl << "Now ";
  sam ++;
  sue ++;
  cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl << "Poor Sam!" << endl;

  sam = ZERO;
  sue = ZERO;
  cout << endl << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl << "Take $1 from each account." << endl << "Now ";
  sam --;
  sue --;
  cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited." << endl << "Lucky Sue!" << endl;
  return 0;
}