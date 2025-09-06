# File name: paces.py

#  This program reads in N test cases, where 1 ≤ N ≤ 50. Each test case 
#  represents a speed in miles per hour (mph) as a decimal. For each test case,
#  output the mile pace for the corresponding mph, rounded to the nearest second.
#  Use a colon ":" to separate the minutes from seconds.
 
#  Author: Charlotte Yoon

import math

# read in number of test cases
n = int(input(""))

# create lists for values
mphs = [] # input vals
mins = []
secs = []
partialMins = [] # decimal minutes before conversion to secs

# read in input values

for i in range (n):
    currentInput = float(input())
    mphs.append(currentInput)

# calculating whole minutes from mph values and storing in mins
for i in range(len(mphs)):
    mins.append(int(math.floor((60.0 / mphs[i]))))

# calculating seconds (to nearest sec) and storing in secs

for i in range(len(mins)):
    partialMins.append((60.0 / mphs[i]) - mins[i])
    secs.append(int(round(partialMins[i] * 60.0)))

print("\n")

# outputting paces as mins:secs followed by new line
for i in range(n):
    print(str(mins[i]) + ":", end="")
    if secs[i] <= 9:
        print("0", end="")
    print(secs[i])