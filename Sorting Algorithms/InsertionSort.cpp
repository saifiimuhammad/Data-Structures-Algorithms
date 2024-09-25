#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void insertionSort(vector<int> &arr) {
	int n = arr.size();
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(vector<int> &arr) {
	for (int i : arr) {
		cout << i << " ";
	}
	cout << endl;
}

int main() {
	ifstream file("input.txt");
	if (!file)
		cerr << "File not found!" << endl;

	vector<int> arr;
	int count;

	while (file >> count) {
		arr.push_back(count);
	}

	cout << "Unsorted Array: ";
	printArray(arr);

	insertionSort(arr);

	cout << "Sorted Array: ";
	printArray(arr);

	return 0;
}