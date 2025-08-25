#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** solution(const char* my_string) {
    int word_count = 1;
    for (size_t i = 0; my_string[i] != '\0'; i++) {
        if (my_string[i] == ' ') word_count++;
    }

    char** answer = (char**)malloc(word_count * sizeof(char*));
    if (!answer) return NULL;

    size_t start = 0;
    size_t len = strlen(my_string);
    int idx = 0;

    for (size_t i = 0; i <= len; i++) {
        if (my_string[i] == ' ' || my_string[i] == '\0') {
            size_t word_len = i - start;
            answer[idx] = (char*)malloc((word_len + 1) * sizeof(char));
            if (!answer[idx]) {
                for (int k = 0; k < idx; k++) free(answer[k]);
                free(answer);
                return NULL;
            }
            strncpy(answer[idx], &my_string[start], word_len);
            answer[idx][word_len] = '\0';
            idx++;
            start = i + 1;
        }
    }

    return answer;
}
