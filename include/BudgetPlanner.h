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
	int sumIncome;
	int sumCosts;
	int sumTotal;
	float percent;

	bool anotherIncome;
	bool anotherCost;

	void welcomeMsg();
	void askForIncomes();
	void askForCosts();

	void calcSum(std::vector<int> income, std::vector<int> cost);
	void calcPercent(std::vector<int> income, std::vector<int> cost);

	void printSum(std::vector<int> income, std::vector<int> cost);
	void printPercent(std::vector<int> income, std::vector<int> cost);
};
