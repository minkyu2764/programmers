#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(len + 1); 
    int idx = 0;

    for (int i = 0; i < len; i++) {
        if (my_string[i] != letter[0]) {
            answer[idx++] = my_string[i]; 
        }
    }

    answer[idx] = '\0'; 
    return answer;
}
