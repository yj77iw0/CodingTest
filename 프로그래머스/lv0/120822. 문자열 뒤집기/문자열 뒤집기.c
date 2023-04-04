#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc(sizeof(int) * len);
    for(int i = 0; i < len + 1; i++){
        answer[i] = my_string[len - i - 1];
    }
    return answer;
}