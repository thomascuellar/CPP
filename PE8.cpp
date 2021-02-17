#include <iostream>
#include <iomanip>

using namespace std;

const double DISCOUNT_PERCENTAGE = 0.15;
const double PROFIT_PERCENTAGE = 0.10;

int main()
{
	double merchCost;
	double storeRent;
	double empSalary;
	double elecCost;

	double totalCosts;
	double desiredGrossIncome;
	double markupPercentage;

	cout << fixed << setprecision(2);

	cout << "Enter total cost of merchandise: " << endl;
	cin >> merchCost;

	cout << endl;

	cout << "Enter salary of employees (include your own): " << endl;
	cin >> empSalary;

	cout << endl;

	cout << "Enter yearly rent: " << endl;
	cin >> storeRent;

	cout << endl;

	cout << "Enter estimated electricity cost: " << endl;
	cin >> elecCost;

	cout << endl;

	totalCosts = merchCost + empSalary + storeRent + elecCost;
	desiredGrossIncome = merchCost + (merchCost * PROFIT_PERCENTAGE) + (totalCosts - merchCost);

	markupPercentage = ((desiredGrossIncome / merchCost) * 100) * (1 + DISCOUNT_PERCENTAGE);

	cout << "Merchandise should be marked up " << markupPercentage << "%" << endl;

	return 0;
}