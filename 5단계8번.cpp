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
	 if (count == 0) {//�ܾ��ϳ� �Է�������
		printf("1");
	}
	 */
	if (list[0] == ' ' && list[len - 2] == ' ') {
		count--;
		printf("%d", count);
	}
	else if (list[0] == ' ' || list[len - 2] == ' ') {
		count--;
		if (len - 2 == 0) {//�����ϳ� �Է�������
			printf("0");
		}
		else {//�� �ܻ̿�Ȳ�϶�
			printf("%d", count + 1);
		}
	}
	
	else {//�� �ܻ̿�Ȳ�϶�
		printf("%d", count + 1);
	}
	
}