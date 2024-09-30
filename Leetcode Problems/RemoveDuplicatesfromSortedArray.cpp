#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0; 
    
    int k = 1;
    
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i - 1]) { 
            nums[k] = nums[i]; 
            k++;
        }
    }
    
    return k; 
}

void printArray(const vector<int>& nums, int k) {
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 5, 5, 6};
    
    int k = removeDuplicates(nums);
    
    cout << "Array after removing duplicates: ";
    printArray(nums, k);
    
    cout << "Number of unique elements: " << k << endl;
    
    return 0;
}