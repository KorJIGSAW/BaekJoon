#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 102
#include <stdio.h>
#include <string.h>

int main() {
    char s1[MAX_SIZE];                      // ũ�Ⱑ 30�� char�� �迭�� �����ϰ� ���ڿ� �Ҵ�
    fgets(s1, MAX_SIZE, stdin);

    char* ptr = strtok(s1, "\n");      // "\n" ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

    while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
    {
        printf("%s\n", ptr);          // �ڸ� ���ڿ� ���
        ptr = strtok(NULL, "\n");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
    }

    return 0;
}
