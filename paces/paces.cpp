/* File name: paces.cpp
 *
 * This program reads in N test cases, where 1 ≤ N ≤ 50. Each test case 
 * represents a speed in miles per hour (mph) as a decimal. For each test case,
 * output the mile pace for the corresponding mph, rounded to the nearest second.
 * Use a colon ":" to separate the minutes from seconds.
 *
 * Author: Charlotte Yoon
*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    
    /* read in num of test cases */
    cin >> n;

    /* resize vectors to hold numOfCases elements */
    vector <double> inputs(n), partialMins(n);
    vector <int> mins(n), secs(n);

    /* reading in raw input mph values */
    for (int i = 0; i < n; i++) {
        cin >> inputs[i];
    }

    /* calculating whole minutes of mph values and storing in mins */
    for (int i = 0; i < n; i++) {
        mins[i] = floor(60 / inputs[i]);
    }

    /* calculating seconds (to nearest second) and storing in secs */
    for (int i = 0; i < n; i++) {
        partialMins[i] = (60 / inputs[i]) - mins[i];
        secs[i] = round(partialMins[i] * 60); // convert decimal part of minutes to whole seconds
    }

    cout << endl;

    /* outputting paces as mins:secs followed by new line */
    for (int i = 0; i < n; i++) {
        // add if statements for secs less than 10, no seconds.
        cout << setw(2) << mins[i] << ":"; // setw for 1-digit minute values (not required)
        if (secs[i] <= 9)
            cout << "0";
        cout << secs[i] << endl;
    }


    return 0;
}