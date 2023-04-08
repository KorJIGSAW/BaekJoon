#include <iostream>
using namespace std;

int main() {
	int num, count, sum;
	while (true) {
		int small[10] = {0,};
		sum = 0;
		count = 0;
		cin >> num;
		if (num == -1) {
			break;
		}

		for (int i = 1; i < num; i++) {
			if(num % i == 0){
				small[count] = i;
				sum += i;
				count++;
			}
		}
		if (sum == num) {
			printf("%d = ", num);
			for (int i = 0; i < count; i++) {
				if (i != 0) {
					printf("+ ");
				}
				printf("%d ", small[i]);
			}
			printf("\n");
		}
		else {
			cout << num << " is NOT perfect." << endl;
		}
	}
}