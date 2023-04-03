#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int com(const void* a, const void* b) {
    return *(int*) a - *(int*) b;
}

int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    
    qsort(numbers, numbers_len, sizeof(int), com);
    
    int n1 = numbers[0] * numbers[1];
    int n2 = numbers[numbers_len - 1] * numbers[numbers_len - 2];
    
    if (n1 > n2) answer = n1;
    else answer = n2;
    
    return answer;
}