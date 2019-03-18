#pragma once
#include <iostream>

using namespace std;

class CalculateTurnover
{
public:
	double CalculateAverageCost(double costOfSale, double numberOfDays) {
		return costOfSale / numberOfDays;
	}

	double CalculateTurnoverDuration(double numberOfdays, double costOfSale, double costGoods) {
		return (30 * costGoods) / costOfSale;
	}

	double CalculateTurnOverRatio(double costOfSale, double costGoods) {
		return costOfSale / costGoods;
	}
};
