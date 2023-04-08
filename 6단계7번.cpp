#include <iostream>
using namespace std;
#define MAX 1000

int main() {
	int c;
	cin >> c;
	for (int k = 0; k < c; k++) {
		int N;
		double sum = 0;
		int count = 0;
		cin >> N;
		int score[MAX];
		for (int i = 0; i < N; i++) {
			cin >> score[i];
			sum += score[i];
		}
		double avg = sum / N;
		for (int i = 0; i < N; i++) {
			if (score[i] > avg) {
				count++;
			}
		}
		printf("%5.3lf%%\n", count * 100. / N);
	}
	
	
}