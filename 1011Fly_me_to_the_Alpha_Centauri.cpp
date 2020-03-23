#include <iostream>
#include <vector>

using namespace std;
int Calculate(double start, double end) {
	double length = end - start;
	double aim = 0;
	int mul_times = 0;
	if (length <= 3) return length;
	while (aim < length) {
		mul_times++;
		aim += 2 * mul_times;
	}
	if (aim - mul_times < length) {
		return 2 * mul_times;
	}
	else {
		return 2 * mul_times - 1;
	}
}
/*
int Calculate(int start, int end) {
	int length = end - start;
	int jump_times = 0;
	int sum = 0;
	vector<int> fomula{};

	if (length <= 3) {
		jump_times = length;
		return jump_times;
	}
	fomula.push_back(1);
	sum += 3;
	jump_times += 3;
	while (sum < length) {
		int tail_index = fomula.size() - 1;
		auto iter = fomula.end();
		iter--;
		if (*iter != 2) {
			fomula[tail_index]++;
			sum++;
		}
		else{
			for (int i = tail_index; i >= 0; i--) {
				if (i == 0) {
					if (fomula.size() == 1) {
						fomula.push_back(1);
						sum++;
						jump_times++;
						continue;
					}
					fomula.push_back(1);
					sum++;
					jump_times++;
					continue;
				}
				else if (fomula[i - 1] < i + 2) {
					fomula[i - 1]++;
					if (abs(fomula[i - 1] - fomula[i]) > 1 || abs(fomula[i - 1] - fomula[i]) > 1) {
						fomula[i]--;
						continue;
					}
					sum++;
					continue;
				}
			}
		}
	}
	return jump_times;
}
*/
void HowMany(int userinput) {
	int count = 0;
	vector<int> jump_times{};
	while (count < userinput) {
		double start, end;
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