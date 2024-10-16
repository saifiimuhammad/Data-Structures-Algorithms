/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
*/



#include <iostream>
#include <vector>

using namespace std;


vector<int> plusOne(vector<int> nums) {
  int n = nums.size();
  for(int i = n-1; i >= 0; --i) {
    if(nums[i] < 9) {
      nums[i] += 1;
      return nums;
    }
    nums[i] = 0;
  }
  nums.insert(nums.begin(), 1);
  return nums;
}

void printArr(vector<int> arr) {
  for(int i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  
  vector<int> arr = {9,9,9};

  cout << "\t Array: ";
  printArr(arr);

  vector<int> ans = plusOne(arr);

  cout << "\t Updated Array: ";
  printArr(ans);

  return 0;
}
