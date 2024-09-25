#include <iostream>
#include <vector>
#include <climits>
#include <fstream>

using namespace std;

const int INFINITY = INT_MAX;

// Merge Sort implementation

void merge(vector<int> &arr, int first, int mid, int last) {

  int n1 = mid - first + 1;
  int n2 = last - mid;

  vector<int> left_arr(n1 + 1);
  vector<int> right_arr(n2 + 1);

  for (int i = 0; i < n1; i++) {
    left_arr[i] = arr[first + i];
  }
  for (int j = 0; j < n2; j++) {
    right_arr[j] = arr[mid + j + 1];
  }

  left_arr[n1] = INFINITY;
  right_arr[n2] = INFINITY;

  int i = 0, j = 0;

  for (int k = first; k <= last; k++) {
    if (left_arr[i] <= right_arr[j]) {
      arr[k] = left_arr[i];
      i++;
    } else {
      arr[k] = right_arr[j];
      j++;
    }
  }
}

void mergeSort(vector<int> &arr, int first, int last) {
  if (first < last) {
    int mid = (first + last) / 2;
    mergeSort(arr, first, mid);
    mergeSort(arr, mid + 1, last);
    merge(arr, first, mid, last);
  }
}

int main() { 

  ifstream file("input.txt");

  if(!file)
    cerr << "Error opening file!" << endl;

  vector<int> arr;
  int count;

  while(file >> count) {
    arr.push_back(count);
  }

  int first = 0;
  int last = arr.size() - 1;

/*
  cout << "Unsorted Array: ";
  for(int e : arr) {
    cout << e << " ";
  }
  cout << endl;
*/

  mergeSort(arr, first, last);

  cout << "Sorted Array: ";
  for(int e : arr) {
    cout << e << " ";
  }
  cout << endl;
  
  return 0; 
}