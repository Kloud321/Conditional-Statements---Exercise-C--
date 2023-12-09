#include <iostream>
#include <iomanip>
#include <string> // Include <string> header for using string type

using namespace std;

int main() {
    string tvShowName;


    int lengthEpisode, lengthBreak;

    getline(cin, tvShowName);

    cin >> lengthEpisode >> lengthBreak;

    double lunchTime = 0.125 * lengthBreak;
    double chillTime = 0.25 * lengthBreak;

    // Calculate the time available for watching the show
    lengthBreak -= (lunchTime + chillTime); // Convert to int for minutes

    if (lengthBreak > lengthEpisode) {
        cout << "You have enough time to watch " << tvShowName << " and left with " << lengthBreak - lengthEpisode << " minutes free time." << endl;
    } else {
        cout << "You don't have enough time to watch " << tvShowName << ", you need " << lengthEpisode - lengthBreak << " more minutes." << endl;
    }

    return 0;
}
