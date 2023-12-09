// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
	double holidayCost;

	int puzzleCount, dolls, bears, minions, trucks;

    double order, toysCount, profit, discount, rent;

	cin >> holidayCost >> puzzleCount >> dolls >> bears >> minions >> trucks;

    toysCount = puzzleCount + dolls + bears + minions + trucks;

    order = puzzleCount * 2.60 + dolls * 3 + bears * 4.10 + minions * 8.20 + trucks * 2;
	
    if (toysCount >= 50) {

        discount = 0.25 * order;
    
    }
    else{

        discount = 0;
    }

    profit = order - discount;

    rent = profit * 0.10;

    profit = profit - rent;

    if (holidayCost <= profit){
        cout << "Yes! " << fixed << setprecision(2) << (profit - holidayCost) << " lv left.";
    } else{
        cout << "Not enough money! " << fixed << setprecision(2) << (holidayCost - profit)  << " lv needed." << endl;
    }

	return 0;

}
