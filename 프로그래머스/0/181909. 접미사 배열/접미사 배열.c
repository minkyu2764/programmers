#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char** suffixes = (char**)malloc(sizeof(char*) * len);

    for (int i = 0; i < len; i++) {
        suffixes[i] = strdup(my_string + i);  // strdup로 문자열 복사 및 메모리 할당
    }

    qsort(suffixes, len, sizeof(char*), compare);

    return suffixes;
}
