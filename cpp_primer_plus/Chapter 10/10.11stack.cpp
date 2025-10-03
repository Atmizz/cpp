// stack.cpp -- Stack member functions
#include "10.10 stack.h"

Stack :: Stack() {
  top = 0;
}

bool Stack :: isEmpty() const {
  return top == 0;
}

bool Stack :: isFull() const {
  return top == MAX;
}

bool Stack :: push(const Item &item) {
  if(top < MAX) {
    items[top++] = item;
    return true;
  }
  return false;
}

bool Stack :: pop(Item &item) {
  if(top > 0) {
    item = items[--top];
    return true;
  }
  return false;
}