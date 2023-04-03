#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.

int com(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int solution(int array[], size_t array_len) {
    int answer = 0;
    
    qsort(array, array_len, sizeof(int), com);
    
    answer = array[array_len / 2];
    
    return answer;
}