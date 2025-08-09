#include <iostream>
#include "backtest.hpp"

int main(void) {
  for (;;) {
    OptionContract o;
    std::cout << "Spot Price: $";
    std::cin >> o.spotprice;
    std::cout << "Strike Price: $";
    std::cin >> o.strikeprice;
    std::cout << "Time to Maturity: ";
    std::cin >> o.ttm;
    std::cout << "Risk Free Interest: ";
    std::cin >> o.riskfreeinterest;
    std::cout << "Volatility: ";
    std::cin >> o.volatility;

    std::cout << CallBlackScholesFormula(o) << std::endl;
    std::cout << PutBlackScholesFormula(o) << std::endl;
  }
  return 0;
}
