#include <stdio.h>
#include <stdlib.h>

int** solution(int n) {\
    int** answer = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        answer[i] = (int*)malloc(n * sizeof(int));
        for (int j = 0; j < n; j++) {
            answer[i][j] = (i == j) ? 1 : 0;
        }
    }
    return answer;
}
