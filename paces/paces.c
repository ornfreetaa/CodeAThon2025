/* File name: paces.c
 *
 * This program reads in N test cases, where 1 ≤ N ≤ 50. Each test case 
 * represents a speed in miles per hour (mph) as a decimal. For each test case,
 * output the mile pace for the corresponding mph, rounded to the nearest second.
 * Use a colon ":" to separate the minutes from seconds.
 *
 * Author: Charlotte Yoon
*/
#include <stdio.h>
#include <math.h>

int main() {
    int n;

    /* read in number of test cases */
    scanf("%d", &n);

    double inputs[n], partialMins[n];
    int mins[n], secs[n];

    /* reading in raw input mph values */
    for (int i = 0; i < n; i++) {
        scanf("%lf", &inputs[i]);
    }

    /* calculating whole minutes of mph values and storing in mins */
    for (int i = 0; i < n; i++) {
        mins[i] = (int)floor(60.0 / inputs[i]);
    }

    /* calculating seconds (to nearest second) and storing in secs */
    for (int i = 0; i < n; i++) {
        partialMins[i] = (60.0 / inputs[i]) - mins[i];
        secs[i] = (int)lround(partialMins[i] * 60.0); // lround from math.h
    }

    printf("\n");

    /* outputting paces as mins:secs followed by new line */
    for (int i = 0; i < n; i++) {
        printf("%2d:", mins[i]);   // 2-width for minutes
        if (secs[i] <= 9)
            printf("0");
        printf("%d\n", secs[i]);
    }

    return 0;
}
