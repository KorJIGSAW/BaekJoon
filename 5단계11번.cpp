#define _CRT_SECURE_NO_WARNINGS
#define MAX_SIZE 102
#include <stdio.h>
#include <string.h>

int main() {
    char s1[MAX_SIZE];                      // 크기가 30인 char형 배열을 선언하고 문자열 할당
    fgets(s1, MAX_SIZE, stdin);

    char* ptr = strtok(s1, "\n");      // "\n" 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        printf("%s\n", ptr);          // 자른 문자열 출력
        ptr = strtok(NULL, "\n");      // 다음 문자열을 잘라서 포인터를 반환
    }

    return 0;
}
