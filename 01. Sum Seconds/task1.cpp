// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	int timeFirst;
	int timeSecond;
	int timeThird;

	int timeAll, seconds, minutes;

	cin >> timeFirst >> timeSecond >> timeThird;

	timeAll = timeFirst + timeSecond + timeThird;

	seconds = timeAll % 60; // 160 / 60 = 40

	minutes = timeAll / 60; // 160 / 60 = 2

	if (seconds < 10) {

		cout << minutes << ":0" << seconds;
	}
	else 
	{
		cout << minutes << ":" << seconds;
	}

	return 0;

}
