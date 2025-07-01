#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // 두 개의 값을 담을 배열 동적 할당
    int* answer = (int*)malloc(sizeof(int) * 2);
    answer[0] = 0;  // 짝수 인덱스
    answer[1] = 0;  // 홀수 인덱스

    for (size_t i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            answer[0] += 1;
        } else {
            answer[1] += 1;
        }
    }

    return answer;
}
