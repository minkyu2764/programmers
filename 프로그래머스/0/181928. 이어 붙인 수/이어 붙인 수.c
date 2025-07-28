#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    char even_str[100] = "";
    char odd_str[100] = "";
    
    for (int i = 0; i < num_list_len; i++) {
        if (num_list[i] % 2 == 0) {
            sprintf(even_str + strlen(even_str), "%d", num_list[i]);
        } else {
            sprintf(odd_str + strlen(odd_str), "%d", num_list[i]);
        }
    }

    int even_num = atoi(even_str);
    int odd_num = atoi(odd_str);

    return even_num + odd_num;
}