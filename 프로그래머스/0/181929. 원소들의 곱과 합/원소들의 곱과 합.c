#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < num_list_len; i++) {
        mul *= num_list[i];
        sum += num_list[i];
    }
    if (mul < pow(sum, 2)) {
        answer = 1;
    } else {answer = 0;}
    return answer;
}