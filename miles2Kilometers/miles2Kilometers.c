/* File name: miles2Kilometers.c
 * 
 * This program converts N number of mile amounts, where 1 ≤ N ≤ 50, to kilometers.
 * Each test case is a decimal value representing a mile amount of at least 0.01.
 * For each test case, output the corresponding kilometer amount, rounded to two
 * decimal places.
 * 
 * Author: Charlotte Yoon
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numOfCases;

    // Read number of test cases
    scanf("%d", &numOfCases);

    double miles[numOfCases], kilometers[numOfCases];


    // Read mile values
    for (int i = 0; i < numOfCases; i++) {
        scanf("%lf", &miles[i]);
    }

    // Convert to kilometers
    for (int i = 0; i < numOfCases; i++) {
        kilometers[i] = 1.61 * miles[i];
    }

    printf("\n");

    // Print results with 2 decimal places
    for (int i = 0; i < numOfCases; i++) {
        printf("%.2f\n", kilometers[i]);
    }

    return 0;
}