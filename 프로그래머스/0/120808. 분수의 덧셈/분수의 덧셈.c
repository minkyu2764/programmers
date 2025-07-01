#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int* answer = (int*)malloc(sizeof(int) * 2);

    // 분자
    answer[0] = numer1 * denom2 + numer2 * denom1;
    // 분모
    answer[1] = denom1 * denom2;

    // 최대공약수로 분자, 분모 나누기
    int g = gcd(answer[0], answer[1]);
    answer[0] /= g;
    answer[1] /= g;

    return answer;
}