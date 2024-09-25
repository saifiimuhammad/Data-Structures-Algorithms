#include <iostream>
#include <functional>

using namespace std;

// Counter problem using lambda function and mutable

function<int()> counter(int n) {
	return [n]() mutable {
		return n++;
	};
}

int main() {
	
	auto counter1 = counter(6);
	auto counter2 = counter(12);
	
	cout << "Counter: 1" << endl;
	cout << counter1() << endl;
	cout << counter1() << endl;
	cout << counter1() << endl;
	
	cout << "Counter: 2" << endl;
	cout << counter2() << endl;
	cout << counter2() << endl;
	cout << counter2() << endl;
	
	return 0;
}