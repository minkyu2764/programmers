#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

int solution(int n, int t) {
    int answer = n * (int)pow(2, t);
    return answer;
}
