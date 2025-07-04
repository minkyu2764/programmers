#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int cnt = 0;
    
    while (hp != 0) {
        if (hp >= 5) {
            cnt++;
            hp -= 5;
        } else if (hp >= 3) {
            cnt++;
            hp -= 3;
        } else {
            cnt++;
            hp -= 1;
        }
    }
    return cnt;
}