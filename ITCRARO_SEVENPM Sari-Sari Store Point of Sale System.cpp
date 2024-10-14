#include <iostream>

using namespace std;

int main (){
	string sugar, rice, sardines, coffee, milk;
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD, usdToPhp, poundToPhp, totalCostPhp;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	
	usdToPhp= 1.00 * 57.28;
	poundToPhp= 1.00 * 74.72;

	
	cout << "Item Name;\n";
	cin >> sugar, rice, sardines, coffee, milk;
	cout << "Quantity purchased:\n";
	cin >> sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	sugarPriceUSD = sugarQty * usdToPhp;
	ricePricePound = riceQty * poundToPhp;
	sardinesPricePound = sardinesQty * poundToPhp;
	coffeePriceUSD = coffeeQty * poundToPhp;
	milkPriceUSD = milkQty * poundToPhp;
	cout << "Price per item in PHP:\n" << sugarPriceUSD << endl;
	totalCostPhp = sugarQty * usdToPhp;
	totalCostPhp = riceQty * poundToPhp;
	totalCostPhp = sardinesQty * poundToPhp;
	totalCostPhp =coffeeQty * poundToPhp;
	totalCostPhp = milkQty * poundToPhp;
	cout << "Total cost per item in PHP:\n" << totalCostPhp << endl;
	return 0;
	
} 