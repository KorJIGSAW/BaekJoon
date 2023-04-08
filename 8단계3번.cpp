#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int C;

	//ÄõÅÍ25
	for (int i = 0; i < T; i++) {
		cin >> C;
		int quater = 0;
		if (C >= 25) {
			quater = C / 25;
			C %= 25;
		}

		//´ÙÀÓ10
		int dime = 0;
		if (C >= 10) {
			dime = C / 10;
			C %= 10;
		}

		//´ÏÄÌ5
		int nickel = 0;
		if (C >= 5) {
			nickel = C / 5;
			C %= 5;
		}

		//Æä´Ï1
		int penny;
		if (C == 0) {
			penny = 0;
		}
		else {
			penny = C / 1;
		}

		cout << quater << " " << dime << " " << nickel << " " << penny << endl;
	}
}