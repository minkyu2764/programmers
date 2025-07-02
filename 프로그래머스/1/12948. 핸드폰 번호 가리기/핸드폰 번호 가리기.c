#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    
    int len = strlen(phone_number);
    char* answer = (char*)malloc(len); // phone_number의 길이를 strlen으로 확인한 후, 동적 할당
    
    for (int i = 0; i < len - 4; i++) {  // 전화번호 뒷자리 4자리를 제외한 나머지를 *로 설정
        answer[i] = '*';
    }
    for (int j = len - 4; j < len; j++) { // 전화번호 뒷자리 4자리 설정
        answer[j] = phone_number[j];
    }
    
    answer[len] = '\0'; // 문자열 마지막 null 문자 추가
    
    return answer;
}