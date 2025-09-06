# File name: miles2Kilometers.cpp
#
# This program converts N number of mile amounts, where 1 ≤ N ≤ 50, to kilometers.
# Each test case is a decimal value representing a mile amount of at least 0.01.
# For each test case, output the corresponding kilometer amount, rounded to two
# decimal places.
# 
# Author: Charlotte Yoon

# read in num of cases
numOfCases = int(input("")) 

# create lists for miles & kilometer equivalents
miles = []
kilometers = []

# read in mile values
for i in range(numOfCases):
    currentInput = float(input())
    miles.append(currentInput)

# convert miles to km
for i in range(len(miles)):
    currentKm = miles[i] * 1.61
    kilometers.append(round(currentKm, 2))

print("\n")

# printing output
for i in kilometers:
    print(i)