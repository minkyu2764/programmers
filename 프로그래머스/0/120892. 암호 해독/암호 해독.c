#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* cipher, int code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(cipher);
    int ans = 0;
    char* answer = (char*)malloc(len / code + 1);
    for (int i = code-1; i < len; i+=code) {
        answer[ans++] = cipher[i];
    }
    answer[ans] = '\0';
    return answer;
}