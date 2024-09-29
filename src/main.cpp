#pragma once

#include "BudgetPlanner.h"

int main()
{
	BudgetPlanner bp;

	bp.welcomeMsg();

	bp.askForIncomes();
	bp.askForCosts();

	bp.calcSum();
	bp.calcPercent();

	bp.printSum();
	bp.printPercent();
	bp.printResult();
}