#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = abs(end_num - start_num) + 1;
    int* answer = (int*)malloc(sizeof(int) * len);
    if (answer == NULL) {
        return NULL; // 
    }

    if (start_num <= end_num) {
        for (int i = 0; i < len; i++) {
            answer[i] = start_num + i;
        }
    } else {
        for (int i = 0; i < len; i++) {
            answer[i] = start_num - i;
        }
    }
    return answer;
}
