//This creates 25 random Test Scores and uses the Bubble Sorting Algorithm to sort
// the test scores from Greatest to Least and prints them out

#include "pch.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;



int main()
{
	int i, temp, swap;
	const int amount = 25;
	int testScores[amount];

	for (i = 0; i < amount; i++) {
		testScores[i] = (rand() % 100) + 1;
		}

	cout << "Original Data set\n";
	for (i = 0; i < amount; i++) {
		cout << ("%d \n", testScores[i]) << endl;
	}

	while (true) {
		swap = false;

		for (i = 0; i < amount-1; i++) {
			if (testScores[i] < testScores[i + 1]) {
				temp = testScores[i];
				testScores[i] = testScores[i + 1];
				testScores[i + 1] = temp;
				swap = 1;
			}
		}

		if (swap == false) {
			break;
		}
	}

	cout << "\nSorted Data set\n";
	for (i = 0; i < amount; i++) {
		cout << ("%d \n", testScores[i]) << endl;
	}

	return 0;

}


