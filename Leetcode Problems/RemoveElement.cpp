/* 
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.
*/

#include <iostream>
#include <vector>
using namespace std;


int removeElement(vector<int> &arr, int val) {
	int k = 0;
	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == val) continue;
		arr[k] = arr[i];
		k++;
	}
	return k;
}


int main() {
	
	vector<int> arr = {2,3,3,1,2};
	int val = 3;
	
	int k = removeElement(arr, val);
	
	cout << "\t k is " << k << endl;
	
	return 0;
}