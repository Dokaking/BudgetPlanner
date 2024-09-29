#pragma once

#include "BudgetPlanner.h"

int main()
{
	BudgetPlanner bp;

	bp.welcomeMsg();

	do
	{
		std::cout << "What is your income? " << std::flush;
		std::cin >> bp.tempIncome;
		bp.income.push_back(bp.tempIncome);
		std::cout << "Is there another income? (0/1) " << std::flush;
		std::cin >> bp.anotherIncome;
		std::cout << std::endl;
	} while (bp.anotherIncome);

	do
	{
		std::cout << "What are your costs? " << std::flush;
		std::cin >> bp.tempCost;
		bp.costs.push_back(bp.tempCost);
		std::cout << "Is there another cost? (0/1) " << std::flush;
		std::cin >> bp.anotherCost;
		std::cout << std::endl;
	} while (bp.anotherCost);

	bp.calcSum(bp.income, bp.costs);

	std::cout << "The costs take " << bp.sum << " of your budget." << std::endl;
}