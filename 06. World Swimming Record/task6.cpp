#include <iostream>
#include <iomanip>
#include <cmath> // Include <cmath> for floor function

using namespace std;

int main() {
    double secondsToBeat, metersToSwim, timeOneMeter, swimerTime, difference, currentSlow;

    cin >> secondsToBeat >> metersToSwim >> timeOneMeter;

    swimerTime = metersToSwim * timeOneMeter;

    currentSlow = floor(metersToSwim / 15) * 12.5;

    swimerTime += currentSlow;

    difference = swimerTime - secondsToBeat;

    if (swimerTime < secondsToBeat) {
        cout << "Yes, he succeeded! The new world record is " << fixed  << setprecision(2) << swimerTime << " seconds.";
    } else {
        cout << "No, he failed! He was " << fixed  << setprecision(2) << difference << " seconds slower.";
    }

    return 0;
}
