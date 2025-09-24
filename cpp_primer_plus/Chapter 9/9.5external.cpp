// external.cpp -- external variables
// compile with support.cpp
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

double warming = 0.3;

void update(double dt);
void local();

int main() {
  cout << "Global warming is " << warming << " degrees.\n";
  update(0.1);
  cout << "After update(), global warming is " << warming << " degrees.\n";
  local();
  cout << "After local(), global warming is " << warming << " degrees.\n";
  return 0;
}