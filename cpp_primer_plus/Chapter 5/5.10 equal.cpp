// equal.cpp -- equality vs assignment
#include <iostream>

using std :: cin;
using std :: cout;
using std :: endl;

int main() {
  int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 20, 18, 20};
  for (int i = 0; quizscores[i] == 20; ++ i) {
    cout << "quiz " << i << " is a 20\n";
  }

  for (int i = 0; quizscores[i] = 20; ++ i) {
    cout << "quiz " << i << " is a 20\n";
  }

  return 0;
}