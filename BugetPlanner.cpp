#include "BudgetPlanner.h"

int main ()
{
  BudgetPlanner bp;

  do
    {
      std::cout << "What is your income?" << std::flush;
      std::cin >> income.push_back();
      std::cout << std::endl;
      std::cout << "Another item?(0/1)" << std::flush;
      std::cin >> anotherIncome;
      std::cout << std::endl;
    } while (anotherIncome)
    
  do
    {
      std::cout << "What are your costs?" << std::flush;
      std::cin >> cost.push_back();
      std::cout << std::endl;
      std::cout << "Another item?(0/1)" << std::flush;
      std::cin >> anotherCost;
      std::cout << std::endl;
    } while (anotherCost)

  calcSum(income, cost);

  std::cout << "The sum is: " << sum << std::endl;
}

int calcSum(std::vector<int> income, std::vector<int> cost)
{
  for (auto e : income.items())
    {
      sum += e;
    }
  for (auto e : cost.items())
    {
      sum += e;
    }
  
  return sum;
}
