#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int containerWithMostWater(vector<int> &hts) {
	int maxWater = 0; // answer
	int left = 0;
	int right = hts.size() - 1;

	while(left < right) {
		int width = right - left;
		int height = min(hts[left], hts[right]);
		int currentWater = width * height;

		maxWater = max(maxWater, currentWater);

	hts[left] < hts[right] ? left++ : right--;
}

return maxWater;
}

int main() {

vector<int> hts = {1,8,6,2,5,4,8,3,7};

cout << containerWithMostWater(hts) << endl;

	return 0;
}
