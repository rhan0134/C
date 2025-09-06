#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0;
    //char a_str[10000];
    //char b_str[10000];
    char a_str[5];
    char b_str[5];
    
    sprintf(a_str, "%d", a); //정수형 -> 문자열(sprintf)
    sprintf(b_str, "%d", b); 
    
    strcat(a_str,b_str); //문자열 합치기
    
    int ab = 2 * a * b;
    
    if (atoi(a_str) >= ab)
    {
        answer = atoi(a_str);
    }
    else
    {
        answer = ab;
    }
    
    return answer;
}