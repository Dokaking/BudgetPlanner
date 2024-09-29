#pragma once

#include <iostream>
#include <array>
#include <vector>

class BudgetPlanner
{
public:
	int tempIncome;
	int tempCost;
	std::vector<int> income;
	std::vector<int> costs;
	int sum;

	bool anotherIncome;
	bool anotherCost;

	void welcomeMsg();
	int calcSum(std::vector<int> income, std::vector<int> cost);
};
