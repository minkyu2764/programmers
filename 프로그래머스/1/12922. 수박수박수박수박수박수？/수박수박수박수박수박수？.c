#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(int n) {
    char* answer = (char*)malloc(n * 3 + 1);
    answer[0] = '\0'; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            strcat(answer, "수"); 
            // 한글은 1바이트보다 커서 오류 발생. 즉, 문자열에 덧붙이는 작업이 필요하므로 strcat을 사용
                                
        } else {
            strcat(answer, "박");
        }
    }

    return answer;
}
