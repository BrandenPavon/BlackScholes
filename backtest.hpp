#ifndef BACKTEST_HPP
#define BACKTEST_HPP

struct OptionContract;
double CallBlackScholesFormula(const OptionContract & OC);
double PutBlackScholesFormula(const OptionContract & OC);

#endif
