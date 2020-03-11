#include <iostream>
using namespace std;
// you will given an integer number that over than 3.
// you have to compute combination of multiply of 3 plus multiply of 5 to make input number and print how many times that 3 and 5 are used.
// if input number has no match of combination by 3 and 5, this code will print integer '-1'.
// if there are several combination to make input number, this code will print the lesser number of times that 3 and 5 are used.
void howMuch(int weight) {
	int _default = -1;
	if (weight < 3) { // out of range
		cout << _default << endl;
		return;
	}
	for (int mul5 = 0; mul5 <= weight / 5; mul5++) { // 1st : 0 * 5 + 0 * 3 = 0, 2nd : 0 * 5 + 1 * 3 = 3...
		for (int mul3 = 0; mul3 <= weight / 3; mul3++) {
			int sum = (mul3 * 3) + (mul5 * 5);
			if (weight < sum) { // out of range
				break;
			}
			if (weight == sum) { // found the match
				if (_default < 0) {
					_default = mul3 + mul5;
					continue;
				}
				else {
					if (_default > mul3 + mul5) { // found the match that lesser used of number.
						_default = mul3 + mul5;
						continue;
					}
				}
			}
		}
	}
	cout << _default << endl;
	return;
}

int main() {
	int weight;
	cin >> weight;
	howMuch(weight);
	return 0;
}