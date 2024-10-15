/* 
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 */



#include <iostream>
#include <vector>

using namespace std;

int searchInsertPos(vector<int> &arr, int target) {
  int left = 0, right = arr.size() - 1;

  while(left <= right) {
    int mid = (left + right) / 2;

    if(arr[mid] == target) return mid;
    else if(arr[mid] < target) left = mid + 1;
    else right = mid - 1;
  }
  
  return left;
}

void printArr(vector<int> &arr) {
  cout << "\t Array: ";
  for(int i : arr) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {

  vector<int> arr = {1,3,4,5};
  int target = 0;

  printArr(arr);

  cout << "\t Enter target number: ";
  cin >> target;

  int k = searchInsertPos(arr, target);

  cout << "\t Index Position of target: " << k << endl; 

  return 0;
}
