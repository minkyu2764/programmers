#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char str_a[6], str_b[6], str_ab[12];

    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);
    
    strcpy(str_ab, str_a);
    strcat(str_ab, str_b);
    int ab = atoi(str_ab);

    int mul = 2 * a * b;

    return (ab >= mul) ? ab : mul;
}