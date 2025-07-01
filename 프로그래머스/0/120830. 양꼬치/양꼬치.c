#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int sum = 0;
    int cnt = 0;
    if ((n / 10) != n) {
        cnt = n / 10;
    }
    sum = (n * 12000) + (k * 2000) - (cnt * 2000);
    
    return sum;
}