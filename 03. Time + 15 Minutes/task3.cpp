// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

	int hour;
    int minutes;

    int helpValue;

	cin >> hour >> minutes;

    helpValue = minutes + 15;

    if(helpValue > 60){
        if (hour == 23){
            hour = 0;
            minutes = helpValue % 60;
        }
        else{
            hour += 1;
            minutes = helpValue % 60;
        }};

    if(minutes < 10 ){
         cout << hour << ":0" << minutes;

    }
    
    cout << hour << ":" << minutes;

	return 0;

}
