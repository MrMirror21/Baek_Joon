#include <iostream>
using namespace std;
// you will given integer of A, B, and C
// A is StaticCost of making product, B is DynamicCost that occur every single product is made, C is Price of the product.
// you have to compute the "Break-Even Point" and print it.(When the profit has made for a first time?)

void Break_Even_Point(int _static, int _dynamic, int _price) {
	if (_dynamic >= _price) { // it means there will be no profit.
		cout << -1 << endl;
		return;
	}
	int Point = _static / (_price - _dynamic) + 1; // "Point" is break-even point.
	cout << Point << endl;
}


int main() {
	int _staticCost;
	int _DynamicCost; // DynamicCost will be multiply by number of product.
	int _Price;
	cin >> _staticCost >> _DynamicCost >> _Price;
	Break_Even_Point(_staticCost, _DynamicCost, _Price);

	return 0;
}