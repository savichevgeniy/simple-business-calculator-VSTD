#pragma once
#include <iostream>

using namespace std;

class SalesAnalysis {
public:
	double FulfilmentPlan(double fact, double plan) {
		return fact - plan;
	}
	double PlanPercent(double fact, double plan) {
		return (fact / plan) * 100;
	}
	double RevenueChange(double currentSeason, double previusSeason) {
		return currentSeason - previusSeason;
	}
	double RevenuePercent(double revenueChange, double previusSeason) {
		return (revenueChange / previusSeason) * 100;
	}
};