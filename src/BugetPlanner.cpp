#include "BudgetPlanner.h"

void BudgetPlanner::welcomeMsg()
{
	std::cout << "=== Budget Planner ================\n" << std::endl;
}

int BudgetPlanner::calcSum(std::vector<int> income, std::vector<int> cost)
{
  for (auto i : income)
    {
      sum += i;
    }
  for (auto c : cost)
    {
      sum -= c;
    }
  
  return sum;
}
