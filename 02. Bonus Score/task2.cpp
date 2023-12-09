// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

	int number;
    double bonusPoints;

	cin >> number;

	if(number <= 100){

        bonusPoints = 5;
    } 
    
    else if(number > 100 && number <= 1000 ){
        bonusPoints = 0.2 * number;
    }

    else{
        bonusPoints = 0.10 * number;
    }

    if (number % 2 == 0){

        bonusPoints += 1;
    }

    if (number % 10 == 5){
        bonusPoints += 2;
    }




    cout << bonusPoints << endl;
    cout << (bonusPoints + number) << endl;


	return 0;

}
