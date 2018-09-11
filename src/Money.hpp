#pragma once

class Money {
public:  
  Money (const int amount);
  int getAmount () const;

private:
  const int _amount;
};
