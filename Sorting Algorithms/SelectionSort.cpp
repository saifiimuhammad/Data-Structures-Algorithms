#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;


void selectionSort(vector<int> &arr, int n) {
	for(int i = 0; i < n; i++) {
		int minElem = i;
		for(int j = i + 1; j < n; j++) {
			if(arr[j] < arr[minElem]) {
				minElem = j;
			}
		}
		swap(arr[i], arr[minElem]);
	}
}



int main() {
	
	ifstream file("input.txt");
    if(!file) 
        cerr << "Cannot read file!" << endl;

    vector<int> arr;
    int count = 0;
    
    while(file >> count) {
        arr.push_back(count);
    }
	
	 /*   cout << "Unsorted Array: ";
     for(int i : arr) {
         cout << i << " ";
    }
    cout << endl;
    */
    
    selectionSort(arr, arr.size());

cout << "Sorted Array: ";
    for(int i : arr) {
            cout << i << " ";
    }
    cout << endl;
    
	return 0;
}