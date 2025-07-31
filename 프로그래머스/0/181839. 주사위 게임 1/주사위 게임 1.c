#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int multi_odd = a * a + b * b;
    int single_odd = 2 * (a + b);
    int not_odd = abs(a - b);
    
    if (a % 2 == 1 && b % 2 == 1) {
        return multi_odd;
    } else if (a % 2 == 1 || b % 2 == 1) {
        return single_odd;
    } else {
        return not_odd;
    }
}