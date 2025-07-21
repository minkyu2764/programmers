#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.

char* solution(const char* n_str) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(n_str);
    int idx = 0;

    while (n_str[idx] == '0' && idx < len) {
        idx++;
    }

    if (idx == len) {
        char* answer = (char*)malloc(2);
        answer[0] = '0';
        answer[1] = '\0';
        return answer;
    }

    int new_len = len - idx;
    char* answer = (char*)malloc(new_len + 1);
    strcpy(answer, n_str + idx);

    return answer;
}
