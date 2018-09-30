#include "catch.hpp"

#include "Money.hpp"

TEST_CASE("Money stores correct amount.") {
  const int moneyAmount = 5;
  const Money money(moneyAmount);
  REQUIRE(money.amount() == moneyAmount);
}
