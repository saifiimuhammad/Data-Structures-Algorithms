
// Two Sum Problem : Hash maps approach
//
// Time Complexity : O(n)
// Space Complexity : O(n)



#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


vector<int> findTwoSum(vector<int> &arr, int target) {
	unordered_map<int, int> h;
	
	for(int i = 0; i < arr.size(); i++) {
		int compliment = target - arr[i];
		
		if(h.count(compliment)) {
			return {h[compliment], i};
		}
		h[arr[i]] = i;
	}
	
	return {-1, -1};
}



int main() {
	
	vector<int> arr = {1, 2, 3, 5};
	int target = 5;
	
	findTwoSum(arr, target);
	
	
	return 0;
}