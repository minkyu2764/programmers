#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int first = 0;
    int second = 0;
    if (a < b) {
        first = a;
        second = b;
    } else if (a > b) {
        first = b;
        second = a;
    } else if (a == b) {
        first = a;
        second = b;
    }
    

    for (int i = first; i <= second; i++) {
        answer += i;
    }
    return answer;
}