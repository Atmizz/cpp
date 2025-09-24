// usenmsp.cpp -- using namespaces
#include <iostream>
#include "9.11namesp.h"

void other();
void another();

int main() {
  using debts :: Debt;
  using debts :: showDebt;
  Debt golf = {
    {
      "Benny",
      "Goats"
    },
    120.0
  };
  showDebt(golf);
  other();
  another();
  return 0;
}

void other() {
  using namespace debts;
  Person dg = {
    "Doodles",
    "Goats"
  };
  showPerson(dg);
  std :: cout << std :: endl;
  Debt zippy[3];
  for(int i = 0; i < 3; ++ i) {
    getDebt(zippy[i]);
  }
  for(int i = 0; i < 3; ++ i) {
    showDebt(zippy[i]);
  }
  std :: cout << "Total debt: $" << sumDebt(zippy, 3) << std :: endl;
}

void another() {
  using debts :: Person;
  Person dg = {
    "Doodles",
    "Goats"
  };
  showPerson(dg);
}