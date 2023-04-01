#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int H, M;
	scanf("%d %d", &H, &M);
		if (M >= 45) {
			M -= 45;
		}
		if (M < 45) {
			H--;
			M += 60;
			M -= 45;
		}
		if (H == -1) {
			H = 23;
		}
		printf("%d %d", H, M);
}