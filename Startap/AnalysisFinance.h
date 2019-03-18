#pragma once
#include <iostream>

using namespace std;

class AnalysisFinace {
public:
	double CalclateWorkingCapital(double receivables, double goodsSaves) {
		return receivables + goodsSaves;
	}
	double CalculateCleanWorkingCapital(double workingCapital, double accountSpayable) {
		return workingCapital - accountSpayable;
	}
};