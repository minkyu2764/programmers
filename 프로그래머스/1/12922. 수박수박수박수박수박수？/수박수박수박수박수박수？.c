#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(n * 3 + 1);
    answer[0] = '\0'; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, "수"); 
        } else {
            strcat(answer, "박");
        }
    }

    return answer;
}
