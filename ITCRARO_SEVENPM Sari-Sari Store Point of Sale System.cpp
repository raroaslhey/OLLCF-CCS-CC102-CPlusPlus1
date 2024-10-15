#include <iostream>

using namespace std;

int main (){
	string sugar, rice, sardines, coffee, milk;
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD, usdToPhp, poundToPhp, totalCostPhp, totalCostPhpSR, totalCostPhpR, totalCostPhpSS, totalCostPhpC, totalCostPhpM;
	int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty, totalQty;
	
	usdToPhp = 1.00 * 57.28;
	poundToPhp = 1.00 * 74.72;
	
	//list of items
	cout << "LIST OF ITEMS: Sugar/Rice/Sardines/Coffee/Milk" << endl;
	
	//quantity of items
	cout << "Sugar: ";
	cin >> sugarQty;
	cout << "Rice: ";
	cin >> riceQty;
	cout << "Sardines: ";
	cin >> sardinesQty;
	cout << "Coffe: ";
	cin >> coffeeQty;
	cout << "Milk: ";
	cin >> milkQty;
	//Total Quantities of items
	totalQty = sugarQty + riceQty + sardinesQty + coffeeQty + milkQty;
	cout << "Quantity purchased:\n" << totalQty << endl;
	//Prices of items
	cout << "Price per item in PHP:" << endl;
	cout << "Sugar:$ ";
	cin >> sugarPriceUSD;
	cout << "Rice:P ";
	cin >> ricePricePound;
	cout << "Sardines:P ";
	cin >> sardinesPricePound;
	cout << "Coffe:P ";
	cin >> coffeePriceUSD;
	cout << "Milk:$ ";
	cin >> milkPriceUSD;
	//TOTAL COST PER ITEM
	cout << "Total cost per item in PHP:" << endl;
	totalCostPhpSR = sugarPriceUSD * usdToPhp;
	cout << "Sugar:PHP " << totalCostPhpSR << endl;
	totalCostPhpR = ricePricePound * poundToPhp; 
	cout << "Rice:PHP " << totalCostPhpR << endl;
	totalCostPhpSS = sardinesPricePound * poundToPhp;
	cout << "Sardines:PHP " << totalCostPhpSS << endl;
	totalCostPhpC = coffeePriceUSD * usdToPhp;
	cout << "Coffe:PHP " << totalCostPhpC << endl;
	totalCostPhpM = milkPriceUSD * usdToPhp;
	cout << "Milk:PHP " << totalCostPhpM << endl;
	//TOTAL COST OF ALL ITEM
	totalCostPhp = totalCostPhpSR + totalCostPhpR + totalCostPhpSS + totalCostPhpC + totalCostPhpM;
	cout << "TOTAL COST: " << totalCostPhp << endl;
	
	return 0;
	
} 
