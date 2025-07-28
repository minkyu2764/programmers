#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(int) * 100);
    int idx = 0;
    while (age != 0) {
        int num = age % 10;
        num += 97;
        answer[idx++] = (char)num;
        age /= 10;
    }
    answer[idx] = '\0';
    
    for (int i = 0; i < idx / 2; i++) {
        char temp = answer[i];
        answer[i] = answer[idx - 1 - i];
        answer[idx - 1 - i] = temp;
    }
    
    return answer;
}