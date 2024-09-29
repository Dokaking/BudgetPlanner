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
	bool anotherIncome;
	bool anotherCost;

	unsigned int sumIncome;
	signed int sumCosts;
	signed int sumTotal;
	float percent;

	void welcomeMsg();
	void askForIncomes();
	void askForCosts();

	void calcSum();
	void calcPercent();

	void printSum();
	void printPercent();
	void printResult();
};
