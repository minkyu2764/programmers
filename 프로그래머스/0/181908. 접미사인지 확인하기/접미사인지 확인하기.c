#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_suffix) {
    int answer = 0;
    int len = strlen(my_string);
    int idx = 0;
    for (int i = 0; i < len; i++) {
        if (my_string[i] == is_suffix[idx]) {
            idx++;
            answer = 1;
        }
        else if (my_string[i] != is_suffix[idx]) {
            answer = 0;
            idx = 0;
        }
    }
    if (len < strlen(is_suffix)) {
        answer = 0;
    }
    return answer;
}