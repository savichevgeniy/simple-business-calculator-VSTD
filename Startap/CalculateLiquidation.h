#pragma once
#include <iostream>

using namespace std;

class CalculateLiquidation {
public:
	double CalcelateCurrentRate(double currentAssets, double currentResponsibiility) {
		return currentAssets / currentResponsibiility;
	}
};