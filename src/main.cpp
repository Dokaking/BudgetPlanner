#pragma once

#include "BudgetPlanner.h"

int main()
{
	BudgetPlanner bp;

	bp.welcomeMsg();

	bp.askForIncomes();
	bp.askForCosts();

	bp.calcSum(bp.income, bp.costs);
	bp.calcPercent(bp.income, bp.costs);

	bp.printSum(bp.income, bp.costs);
	bp.printPercent(bp.income, bp.costs);
}