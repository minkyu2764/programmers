#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int num, int k) {
    char str[10];
    sprintf(str, "%d", num);

    char target = k + '0';

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == target) {
            return i + 1; 
        }
    }

    return -1;
}
