#include <iostream>
#include <vector>
using namespace std;
// There is a hotel that has H floors that have W rooms for each. it's figure is rectangle.
// Elevator of hotel is located the left side of hotel. Front gate of the hotel is located in front of elevator in 1st floor.
// Ignore the distance between the elevator and the front gate.
// All rooms have "1" distance from the rooms that next to.
// The number of rooms will be "YXX" or "YYXX", Y is the number of floor, and X is the distance from the elevator.
// Guests only care about distance of walking. but if X of rooms are same, they prefer the room of lower floor.
// Your code will compute room number for guests who arrive by order. Every room is Empty at begin.
// You will given test datas, at first line, natural number "T" will given that means number of guests.
// From second line, each line gives your program three natural numbers that contain H, W, N(order of guest).
// Your program have to print room number of guests one by each line.
int CalNumber(int _floor, int _rooms, int _order) { // #2
	int floor = 0;
	int roomNum = 0;
	roomNum = (_order / _floor) + 1; // compute room number & floor number
	floor = _order % _floor;
	if (floor == 0) { // the room is at highest floor
		floor = _floor;
		roomNum--;
	}
	return floor * 100 + roomNum; // YXX, YYXX format
}

void YourNumber(int howMany) { // #1
	int count = 0;
	vector<int>RoomNum{};
	while (count < howMany) { // loop for number of guests
		int _floor, _rooms, _order;
		count++;
		cin >> _floor >> _rooms >> _order;
		RoomNum.push_back(CalNumber(_floor, _rooms, _order)); // temporary save room numbers
	}
	for (int elem : RoomNum) cout << elem << endl; // print room number one by one
	return;
}

int main() {
	int userinput;
	cin >> userinput;
	YourNumber(userinput);
	return 0;
}