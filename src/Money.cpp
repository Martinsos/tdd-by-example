#include "Money.hpp"

Money::Money(const int amount) : _amount(amount) {}

int Money::amount() const {
  return this->_amount;
}
