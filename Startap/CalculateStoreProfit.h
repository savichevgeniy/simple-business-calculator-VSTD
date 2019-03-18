#pragma once
#include <iostream>

using namespace std;

class CalculateStoreProfit
{
public:
	double CalculateGrossProfit(double revenue, double costPrice)
	{
		return revenue - costPrice;
	}

	double CalculateGrossProfitability(double revenue, double grossProfit)
	{
		return grossProfit / revenue;
	}

	double CalculateShopRental(double square, double cost)
	{
		return cost * square;
	}
};
