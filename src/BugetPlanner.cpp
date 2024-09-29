#include "BudgetPlanner.h"

void BudgetPlanner::welcomeMsg()
{
	std::cout << "=== Budget Planner ================\n" << std::endl;
}

void BudgetPlanner::askForIncomes()
{
	do
	{
		std::cout << "What is your income? " << std::flush;
		std::cin >> tempIncome;
		// TODO check for correct input
		income.push_back(tempIncome);
		std::cout << "Is there another income? (0/1) " << std::flush;
		std::cin >> anotherIncome;
		std::cout << std::endl;
	} while (anotherIncome);
}

void BudgetPlanner::askForCosts()
{
	do
	{
		std::cout << "What are your costs? " << std::flush;
		std::cin >> tempCost;
		// TODO check for correct input
		costs.push_back(tempCost);
		std::cout << "Is there another cost? (0/1) " << std::flush;
		std::cin >> anotherCost;
		std::cout << std::endl;
	} while (anotherCost);
}

void BudgetPlanner::calcSum(std::vector<int> income, std::vector<int> cost)
{
  for (auto i : income)
    {
      sumIncome += i;
    }
  for (auto c : cost)
    {
      sumCosts += c;
    }
  sumTotal = sumIncome - sumCosts;
}

void BudgetPlanner::printSum(std::vector<int> income, std::vector<int> cost)
{
	std::cout << "After all costs you have " << sumTotal << " left." << std::endl;
}

void BudgetPlanner::calcPercent(std::vector<int> income, std::vector<int> cost)
{
	percent = static_cast<float>(sumCosts * 100) / sumIncome;
}

void BudgetPlanner::printPercent(std::vector<int> income, std::vector<int> cost)
{
	std::cout << "That makes " << percent << "\% of your budget." << std::endl;
}