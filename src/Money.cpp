#include "Money.hpp"

Money::Money(const int amount) : _amount(amount) {
}

int Money::getAmount() const {
  return this->_amount;
}
