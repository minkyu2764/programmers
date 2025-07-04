#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* my_string) {
    int len = strlen(my_string);
    int* answer = (int*)malloc(sizeof(int) * len); 
    int ans = 0;

    for (int i = 0; i < len; i++) {
        if (my_string[i] >= '0' && my_string[i] <= '9') {
            answer[ans++] = my_string[i] - '0'; 
        }
    }

    for (int i = 0; i < ans - 1; i++) {
        for (int j = i + 1; j < ans; j++) {
            if (answer[i] > answer[j]) {
                int temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }

    return answer;
}
