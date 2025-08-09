#include <cmath>
#include "backtest.hpp"

double CallBlackScholesFormula(const OptionContract & OC) {
  double S = OC.spotprice;
  double K = OC.strikeprice;
  double T = OC.ttm;
  double r = OC.riskfreeinterest;
  double V = OC.volatility;
  double d1 = (std::log(S/K) + (r+0.5*V*V) * T) / (V*std::sqrt(T));
  double d2 = d1 - V * std::sqrt(T);
  return S * (0.5*std::erfc(-d1/std::sqrt(2.0))) - K * std::exp(-r*T) * (0.5*std::erfc(-d2/std::sqrt(2.0)));
}

double PutBlackScholesFormula(const OptionContract & OC) {
  double S = OC.spotprice;
  double K = OC.strikeprice;
  double T = OC.ttm;
  double r = OC.riskfreeinterest;
  double V = OC.volatility;
  double d1 = (std::log(S/K) + (r+0.5*V*V) * T) / (V*std::sqrt(T));
  double d2 = d1 - V * std::sqrt(T);
  return K * (0.5*std::erfc(-d1/std::sqrt(2.0))) - S * std::exp(-r*T) * (0.5*std::erfc(-d2/std::sqrt(2.0)));
}
