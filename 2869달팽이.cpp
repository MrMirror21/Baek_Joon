#include <iostream>
using namespace std;
// a snail is on the ground. it will climb a tree that V meter long.
// it can climb A meter at day, but it slip B meter while it sleeps on night.
// when it reach on top, it doesn't slip anymore.
// you will given A, B, V that seperate by blank (1<=B<A<=V<=1,000,000,000)
// you have to print how many days that will take to the snail reaches on top.
int main() {
	int climb, slip, length, day;
	cin >> climb >> slip >> length;
	if (climb == length) cout << 1 << endl;
	else {
		day = (length - climb) / (climb - slip); // if i use loop, it will take too much time. so i made a formula. the pattern of snail is (day climb) + (day climb - night slip) + (") + (") + ...
		if ((length - climb) % (climb - slip) != 0) cout << day + 2 << endl; // if (length - climb) % (climb - slip) != 0, it will take one more day to reach top.
		else cout << day + 1 << endl;
	}
	return 0;
}