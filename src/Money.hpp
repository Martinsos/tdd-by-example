#pragma once

class Money {
public:
  Money(const int amount);
  int amount() const;

private:
  const int _amount;
};
