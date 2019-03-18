#pragma once
#include <iostream>

using namespace std;
 
class CalculateProfitability {
public:
	double CalculateProfitGross(double salesPrseeds, double costProseeds) {
		return salesPrseeds - costProseeds;
	}

	double CalculateProfitabilityProseeds(double profitGross, double salesProseeds) {
		return (profitGross / salesProseeds) * 100;
	}

	double CalculateProfitabilityGoods(double profitGross, double averageCostGoods) {
		return (profitGross / averageCostGoods) * 100;
	}

	double CalculateProfitabilityRate(double profitGross, double averageCostGoods) {
		return (profitGross / averageCostGoods);
	}
};
