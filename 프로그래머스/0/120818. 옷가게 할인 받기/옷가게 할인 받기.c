#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    int saleprice = 0;
    
    if (price >= 500000) {
        answer = (double)price * 0.8;
    } else if (price >= 300000) {
        answer = (double)price * 0.9;
    } else if (price >= 100000) {
        answer = (double)price * 0.95;
    } else {
        answer = price;
    }
    return answer;
}