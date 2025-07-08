#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string, const char* is_prefix) {
    int prlen = strlen(is_prefix);
    int stlen = strlen(my_string);
    
    for (int i = 0; i < prlen; i++) {
        if (my_string[i] != is_prefix[i]) {
            return 0;
        }
    }
    return 1;
}