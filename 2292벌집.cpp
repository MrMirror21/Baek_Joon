#include <iostream>
#include <math.h>
using namespace std;
// there is a Bee-Hive that comprises hexagons. Address of the hexagon of center is integer 1.
// next number will be given to a hexagon that next to the previous one.
// if there is no hexagon to give address, the next number will be given to a hexagon that beneath of previous one.
// you will given a Integer N, you have to compute how many hexagons needed to pass to reach the place that have the address of N by optimal pass.

void WhereIs(int howMany) {
	int level = 0;
	int dynamicNum = 1;
	while (dynamicNum < howMany) {
		level++;
		dynamicNum += (6 * level); // Each level(hexagons that compose outline of center hexagon or hexagons) has 6 * level of hexagons.
	}
	cout << level + 1 << endl; // to reach the hexagon, you have to start at the center, so plus 1.
	return;
}

int main() {
	int howMany;
	cin >> howMany;
	WhereIs(howMany);
	return 0;
}