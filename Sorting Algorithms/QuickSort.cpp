#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>

using namespace std;

// QuickSort Implementation

int partition(vector<int> &arr, int front, int last) {
    int pivot = arr[front];
     
    int i = front;
     
    for(int j = front + 1; j <= last; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);          
        }
    }     
    swap(arr[i], arr[front]);
     
    return i;
}

void QuickSort(vector<int> &arr, int front, int last) {
    if(front < last) {
        int mid = partition(arr, front, last);
        QuickSort(arr, front, mid - 1);
        QuickSort(arr, mid + 1, last);
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
    
    int front = 0;
    int last = arr.size() - 1;
    
    // cout << "Unsorted Array: ";
    // for(int i : arr) {
    //         cout << i << " ";
    // }
    // cout << endl;
    
    QuickSort(arr, front, last);

cout << "Sorted Array: ";
    for(int i : arr) {
            cout << i << " ";
    }
    cout << endl;

    return 0;
}