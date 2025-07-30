#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int solution(int a, int b) {
    char ab[20];
    char ba[20];

    sprintf(ab, "%d%d", a, b);
    sprintf(ba, "%d%d", b, a);

    int ab_value = atoi(ab);
    int ba_value = atoi(ba);

    return ab_value >= ba_value ? ab_value : ba_value;
}
