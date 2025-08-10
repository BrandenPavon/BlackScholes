#ifndef BACKTEST_HPP
#define BACKTEST_HPP

struct OptionContract {
  double spotprice;
  double strikeprice;
  double ttm;
  double riskfreeinterest;
  double volatility;
  double delta;
  double gamma;
  double vega;
  double theta; 
  double rho;
  double epsilon;
};

double CallBlackScholesFormula(const OptionContract & OC);
double PutBlackScholesFormula(const OptionContract & OC);

#endif
