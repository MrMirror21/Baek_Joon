#include <iostream>
#include <vector>

using namespace std;

int CalPeople(int _floor, int _roomNum) {
	cout << "start" << endl;
	vector<vector<int>> matrix{};
	for (int i = 0; i < _floor + 1; i++) {
		cout << "floor : " << i << endl;
		vector<int> floor{};
		if (i == 0) {
			for (int j = 0; j < _roomNum; j++) {
				floor.push_back(j + 1);
				cout << floor[j] << endl;
			}
			matrix.push_back(floor);
			continue;
		}
		for (int j = 0; j < _roomNum; j++) {
			cout << "room : " << j << endl;
			floor.push_back(0);
			for (int k = 0; k <= j; k++) {
				floor[j] += matrix[i - 1][k];
				cout << floor[j] << endl;
			}
		}
		matrix.push_back(floor);
	}
	cout << "end" << endl;
	int result = matrix[_floor][_roomNum - 1];
	int* p = &matrix[_floor][_roomNum - 1];
	return *p;
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