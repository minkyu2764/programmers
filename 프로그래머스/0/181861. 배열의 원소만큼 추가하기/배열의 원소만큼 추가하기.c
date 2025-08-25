#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
int* solution(int arr[], size_t arr_len) {
    int* answer = malloc(10000 * sizeof(int));
    int idx = 0;

    for (size_t i = 0; i < arr_len; i++) {
        for (int j = 0; j < arr[i]; j++) {
            answer[idx++] = arr[i];
        }
    }
    
    return answer;
}
