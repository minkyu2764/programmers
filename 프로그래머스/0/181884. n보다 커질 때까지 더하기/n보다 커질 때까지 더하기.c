#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int n) {
    int answer = 0;
    int idx = 0;
    while (n >= answer) {
        answer += numbers[idx];
        idx++;
    }
    return answer;
}