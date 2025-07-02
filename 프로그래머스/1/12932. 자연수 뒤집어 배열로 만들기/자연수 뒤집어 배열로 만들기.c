#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    long long temp = n;
    int len = 0;

    while (temp > 0) { // 배열의 자릿수 (배열의 방 개수)
        temp /= 10;
        len++;
    }

    int* arr = (int*)malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
        arr[i] = n % 10;
        n /= 10;
    }

    return arr;
}
