#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(str_list_len * 10 + 1);
    answer[0] = '\0';
    for (int i = 0; i < str_list_len; i++) {
        if (!strstr(str_list[i], ex)) {
            strcat(answer, str_list[i]);
        }
    }
    return answer;
}