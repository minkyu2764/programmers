#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* myString, const char* pat) {
    int answer = 0;
    int len = strlen(myString);
    char* mstr = (char*)malloc(len + 1);
    
    for (int i = 0; i < len; i++) {
        if (myString[i] == 'A') {
            mstr[i] = 'B';
        } else if (myString[i] == 'B') {
            mstr[i] = 'A';
        }
    }
    answer = strstr(mstr, pat) != NULL ? 1 : 0;
    mstr[len] = '\0';
    return answer;
}