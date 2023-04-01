#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 1000002
#include <stdio.h>
#include <string.h>

int main() {
	int count = 0;
	char list[MAX_SIZE];
	fgets(list, MAX_SIZE, stdin);
	int len = strlen(list);
	for (int i = 0; i < len; i++) {
		if (list[i] == ' ') {
			count++;
		}
	}
	 /*
	 if (count == 0) {//단어하나 입력했을때
		printf("1");
	}
	 */
	if (list[0] == ' ' && list[len - 2] == ' ') {
		count--;
		printf("%d", count);
	}
	else if (list[0] == ' ' || list[len - 2] == ' ') {
		count--;
		if (len - 2 == 0) {//공백하나 입력했을때
			printf("0");
		}
		else {//그 이외상황일때
			printf("%d", count + 1);
		}
	}
	
	else {//그 이외상황일때
		printf("%d", count + 1);
	}
	
}