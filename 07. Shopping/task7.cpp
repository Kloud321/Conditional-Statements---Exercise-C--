#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double budget, videoCardsPrice, processorsPrice, memoryPrice;
    int numVideoCards, numProcessors, numMemory;

    cin >> budget >> numVideoCards >> numProcessors >> numMemory;

    videoCardsPrice = numVideoCards * 250.0;
    processorsPrice = numProcessors * (0.35 * videoCardsPrice);
    memoryPrice = numMemory * (0.10 * videoCardsPrice);

    double totalCost = videoCardsPrice + processorsPrice + memoryPrice;

    if (numVideoCards > numProcessors) {
        // Applying 15% discount if the number of video cards is greater than processors
        totalCost *= 0.85;
    }

    if (totalCost <= budget) {
        cout << "You have " << fixed << setprecision(2) << budget - totalCost << " leva left!";
    } else {
        cout << "Not enough money! You need " << fixed << setprecision(2) << totalCost - budget << " leva more!";
    }

    return 0;
}
