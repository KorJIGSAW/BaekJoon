#include <iostream>
using namespace std;

int main() {
	int number = 0;
	int count = 1;

	cin >> number;
	for (int i = 1; i < number; i+= 6*(count-1)) {
		count++;
	}
	cout << count;
}