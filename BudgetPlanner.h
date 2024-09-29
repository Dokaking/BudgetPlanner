#include <iostream>
#include <array>
#include <vector>

class BudgetPlanner
{
  std::vector<int> income;
  std::vector<int> costs;
  int sum;

  bool anotherIncome;
  bool anotherCost;

  int calcSum(std::vector<int> income, std::vector<int> cost);
}
