#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // 뒤집은 결과를 저장할 배열을 동적 할당
    int* answer = (int*)malloc(sizeof(int) * num_list_len);

    for (size_t i = 0; i < num_list_len; i++) {
        answer[i] = num_list[num_list_len - 1 - i];
    }

    return answer;
}
