#include <iostream>
#include <vector>

using namespace std;

int CalPeople(int _floor, int _roomNum) {
	vector<vector<int>> matrix{};
	for (int i = 0; i < _floor + 1; i++) {
		vector<int> floor{};
		if (i == 0) {
			for (int j = 0; j < _roomNum; j++) {
				floor.push_back(j + 1);
			}
			matrix.push_back(floor);
			continue;
		}
		for (int j = 0; j < _roomNum; j++) {
			floor.push_back(0);
			for (int k = 0; k <= j; k++) {
				floor[j] += matrix[i - 1][k];
			}
		}
		matrix.push_back(floor);
	}
	return matrix[_floor][_roomNum - 1];
}

void HowMany(int userinput) {
	int count = 0;
	vector<int> population{};
	while (count < userinput) {
		count++;
		int _floor, _roomNum;
		cin >> _floor;
		cin >> _roomNum;
		population.push_back(CalPeople(_floor, _roomNum));
	}
	for (int elem : population) cout << elem << endl;
	return;
}

int main() {
	int userinput;
	cin >> userinput;
	HowMany(userinput);
	return 0;
}