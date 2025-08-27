#include <iostream>
#include "backtest.hpp"

int main(void) {
  for (;;) {
    OptionContract o;
    BlackScholes b;
    std::cout << "Spot Price: $";
    std::cin >> o.spotprice;
    std::cout << "Strike Price: $";
    std::cin >> o.strikeprice;
    std::cout << "Time to Maturity in years(e.g 0.5 is 6 months): ";
    std::cin >> o.ttm;
    std::cout << "Risk Free Interest as decimal (e.g 0.05 is 5%): ";
    std::cin >> o.riskfreeinterest;
    std::cout << "Volatility as decimal (e.g 0.05 is 5%) ";
    std::cin >> o.volatility;

    std::cout << "Call Price: $" << b.CallBlackScholesFormula(o) << std::endl;
    std::cout << "Put Price: $" << b.PutBlackScholesFormula(o) << std::endl;
  }
  return 0;
}
