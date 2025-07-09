#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n) {
    int answer = 0;
    if (n % 2 == 0) {
        for (int i = 2; i <= n; i+=2) {
            answer = answer + pow(i, 2);
        }
    } else if (n % 2 == 1) {
        for (int i = 1; i <= n; i+= 2) {
            answer = answer + i;
        }
    }
    return answer;
}