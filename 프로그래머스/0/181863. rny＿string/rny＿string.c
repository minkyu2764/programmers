#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* rny_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(rny_string);
    int cnt = 0;
    for (int i = 0; i < len; i++) {
        if (rny_string[i] == 'm') {
            cnt++;
        } 
    }
    char* answer = (char*)malloc(len + cnt + 1);
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (rny_string[i] == 'm') {
            answer[idx++] = 'r';
            answer[idx++] = 'n';
        }
        else {
            answer[idx++] = rny_string[i];
        }
    }
    answer[idx] = '\0';
    return answer;
}