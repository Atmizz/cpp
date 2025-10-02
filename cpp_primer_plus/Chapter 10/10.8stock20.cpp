// stock20.cpp -- augmented version
#include <iostream>
#include "10.7stock20.h"

using std :: cin;
using std :: cout;
using std :: endl;
using std :: string;

Stock :: Stock() {
  company = "no name";
  shares = 0;
  share_val = 0.0;
  total_val = 0.0;
}

Stock :: Stock(const string &co, long n, double pr) {
  company = co;
  if(n < 0) {
    cout << "Number of shares can't be negative; " << company << " shares set to 0." << endl;
    shares = 0;
  } else {
    shares = n;
  }
  share_val = pr;
  set_tot();
}

Stock :: ~Stock() {
  
}

void Stock :: acquire(const string &co, long n, double pr) {
  company = co;
  if(n < 0) {
    cout << "Number of shares can't be negative; " << company << " shares set to 0." << endl;
    shares = 0;
  } else {
    shares = n;
  }
  share_val = pr;
  set_tot();
}

void Stock :: buy(long num, double price) {
  if(num < 0) {
    cout << "Number of shares purchased can't be negative. " << endl;
  } else {
    shares += num;
    share_val = price;
    set_tot();
  }
}

void Stock :: sell(long num, double price) {
  if(num < 0) {
    cout << "Number of shares sold can't be negative. " << endl;
  } else if(num > shares) {
    cout << "You can't sell more than you have." << endl;
  } else {
    shares -= num;
    share_val = price;
    set_tot();
  }
}

void Stock :: update(double price) {
  share_val = price;
  set_tot();
}

void Stock :: show() const {
  std :: ios_base :: fmtflags orig = cout.setf(std :: ios_base :: fixed, std :: ios_base :: floatfield);
  std :: streamsize prec = cout.precision();

  cout << "Company: " << company << endl;
  cout << "Shares: " << shares << endl;
  cout.precision(2);
  cout << "Share Price: $" << share_val << endl;
  cout << "Total Worth: $" << total_val << endl;

  cout.setf(orig, std :: ios_base :: floatfield);
  cout.precision(prec);
}

const Stock &Stock :: topval(const Stock &s) const {
  if(s.total_val > this->total_val) {
    return s;
  } else {
    return *this;
  }
}