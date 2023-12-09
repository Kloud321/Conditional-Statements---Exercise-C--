// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
	double budget;

	int statistNumber;

    double outfit, decor, costs, outfitCost;

    cin >> budget >> statistNumber >> outfit;
    
    decor = 0.10 * budget;

    outfitCost = statistNumber * outfit;
    
    if (statistNumber > 150){
        outfitCost -= outfitCost * 0.10;
    }

    costs = decor + outfitCost;

    if (budget >= costs){
        cout << "Action!" << endl;
        cout << "Wingard starts filming with " <<fixed << setprecision(2) << (budget - costs) << " leva left." << endl;
    } else{
        cout << "Not enough money!" << endl;
        cout << "Wingard needs " <<fixed << setprecision(2) << (costs - budget) << " leva more."<< endl;
    }

	return 0;

}