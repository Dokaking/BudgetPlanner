#pragma once

#include <array>
#include <iostream>
#include <vector>

class BudgetPlanner
{
public:
	int                       tempIncome;
	int                       tempCost;
	std::vector<unsigned int> income;
	std::vector<signed int>   costs;
	bool                      anotherIncome;
	bool                      anotherCost;

	// TODO calculate in Cent and output in Euro with 2 decimals
	int   valueCent;
	float valueEuro;

	unsigned int sumIncome;
	signed int   sumCosts;
	signed int   sumTotal;
	float        percent;

	void welcomeMsg ();
	void askForIncomes ();
	void askForCosts ();

	void calcSum ();
	void calcPercent ();

	void printSum ();
	void printPercent ();
	void printResult ();
};
