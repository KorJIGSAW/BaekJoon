#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, MAX, MIN, *A;
	scanf("%d", &n);
	A = (int *)malloc(4 * n);
	MAX = -1000001;
	MIN = 1000001;
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
		if (MAX < A[i]) {
			MAX = A[i];
		}
		if (MIN > A[i]) {
			MIN = A[i];
		}
	}
	printf("%d %d", MIN, MAX);
	free(A);
}