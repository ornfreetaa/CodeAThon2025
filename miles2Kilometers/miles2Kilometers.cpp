/* File name: miles2Kilometers.cpp
 * 
 * This program converts N number of mile amounts, where 1 ≤ N ≤ 50, to kilometers.
 * Each test case is a decimal value representing a mile amount of at least 0.01.
 * For each test case, output the corresponding kilometer amount, rounded to two
 * decimal places.
 * 
 * Author: Charlotte Yoon
 */
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    int numOfCases;
    
    /* read in num of test cases */
    cin >> numOfCases;

    /* resize vectors to hold numOfCases elements */
    vector <double> miles(numOfCases), kilometers(numOfCases);

    /* reading in mile amounts */
    for (int i = 0; i < numOfCases; i++) {
        cin >> miles[i];
    }

    /* calculating km value for each test case */
    for (int i = 0; i < numOfCases; i++) {
        kilometers[i] = 1.61 * miles[i];
    }

    cout << fixed << setprecision(2) << endl;

    for (int i = 0; i < numOfCases; i++) {
        cout << kilometers[i] << endl;
    }

    return 0;
}