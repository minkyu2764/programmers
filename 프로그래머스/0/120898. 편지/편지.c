
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// 글자 한 자당 2cm 크기로 지정했으므로 전체 길이는 strlen(message) * 2
int solution(const char* message) {
    int answer = strlen(message) * 2;
    return answer;
}
 