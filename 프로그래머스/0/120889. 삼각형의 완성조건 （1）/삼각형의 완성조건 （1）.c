#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int solution(int sides[], size_t sides_len) {
    for (int i = 0; i < sides_len - 1; i++) {
        for (int j = i + 1; j < sides_len; j++) {
            if (sides[i] > sides[j]) {
                int temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }

    if (sides[2] < sides[0] + sides[1]) {
        return 1;
    } else {
        return 2;
    }
}
