#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	int C;

	//����25
	for (int i = 0; i < T; i++) {
		cin >> C;
		int quater = 0;
		if (C >= 25) {
			quater = C / 25;
			C %= 25;
		}

		//����10
		int dime = 0;
		if (C >= 10) {
			dime = C / 10;
			C %= 10;
		}

		//����5
		int nickel = 0;
		if (C >= 5) {
			nickel = C / 5;
			C %= 5;
		}

		//���1
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