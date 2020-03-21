#include <iostream>
#include <vector>

using namespace std;

int Calculate(int start, int end) {
	int length = end - start;
	int jump_times = 0;
	int sum = 0;
	vector<int> fomula{};
	if (length <= 3) {
		jump_times = length;
		return jump_times;
	}
	while (sum < length) {
		fomula.push_back(1);
		sum++;
		jump_times++;
		if ()
	}
	return jump_times;
}

void HowMany(int userinput) {
	int count = 0;
	vector<int> jump_times{};
	while (count < userinput) {
		int start, end;
		count++;
		cin >> start >> end;
		jump_times.push_back(Calculate(start, end));
	}
	for (int elem : jump_times) cout << elem << endl;
}

int main() {
	int userinput;
	cin >> userinput;
	HowMany(userinput);
	return 0;
}