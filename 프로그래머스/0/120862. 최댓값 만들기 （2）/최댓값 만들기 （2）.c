#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h> 

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int max_product = INT_MIN;

    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = i + 1; j < numbers_len; j++) {
            int product = numbers[i] * numbers[j];
            if (product > max_product) {
                max_product = product;
            }
        }
    }

    return max_product;
}
