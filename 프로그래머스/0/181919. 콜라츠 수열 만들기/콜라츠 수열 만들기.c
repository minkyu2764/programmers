#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * n);
    int cnt = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            answer[cnt] = n;
            n /= 2;
            cnt++;
        }
        else if (n % 2 == 1) {
            answer[cnt] = n;
            n = n * 3 + 1;
            cnt++;
        }
    }
    if (n == 1) {
        answer[cnt] = 1;
    }
    return answer;
}