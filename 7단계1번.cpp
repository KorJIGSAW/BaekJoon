#include <iostream>
using namespace std;
#define MAX 100

int main() {
	int N, M;
	cin >> N >> M;
	int matrix1[MAX][MAX];
	int matrix2[MAX][MAX];
	int result[MAX][MAX];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix1[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> matrix2[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
			cout << result[i][j] << " ";
		}
		cout << endl;
	}

}