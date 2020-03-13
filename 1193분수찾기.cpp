#include <iostream>
using namespace std;
// there is a matrix that its infinitely large.
// when you move to right column, value of denominator of element will increase by 1.
// when you move to down row, value of numerator of element will increase by 1.
// you will given a Natural number X
// number of fraction will be set 1/1 -> 1/2 -> 2/1 -> 3/1 -> 2/2 ->...(like zig-zag).
// you have to print what Xth of fraction in the matrix is.
void WhatIs(int num) {
	int son, mom;
	int mimic = 0;
	int level = 1;
	while (mimic < num) { // search the diagonal that fraction locate.
		mimic += level;
		level++;
	}
	level--;
	mimic -= level;
	if (level % 2 == 0) { // number of fraction goes zig-zag, so direction of an even diagonal and an odd diagonal will opposite.
		son = 1;
		mom = level;
		for (mimic; mimic < num - 1; mimic++) {
			son++;
			mom--;
		}
	}
	else {
		son = level;
		mom = 1;
		for (mimic; mimic < num - 1; mimic++) {
			son--;
			mom++;
		}
	}

	cout << son << "/" << mom << endl;
	return;
}

int main() {
	int NumberOfIt;
	cin >> NumberOfIt;
	WhatIs(NumberOfIt);
	return 0;
}