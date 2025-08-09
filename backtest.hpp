#ifndef BACKTEST_HPP
#define BACKTEST_HPP

struct OptionContract {
  double spotprice;
  double strikeprice;
  double ttm;
  double riskfreeinterest;
  double volatility;
};

double CallBlackScholesFormula(const OptionContract & OC);
double PutBlackScholesFormula(const OptionContract & OC);

#endif
