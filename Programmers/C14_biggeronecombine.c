#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    char a_str[10000];
    char a_str2[10000]; //or sprintf(a_str, "%d", a); 한 번 더 하기
    char b_str[10000];
    
    int answer = 0;
    sprintf(a_str, "%d", a); //정수형 -> 문자열(sprintf)
    sprintf(a_str2, "%d", a);
    sprintf(b_str, "%d", b);
    strcat(a_str,b_str); //문자열 합치기
    strcat(b_str,a_str2);
    
    if(atoi(a_str) >= atoi(b_str)) //문자열 -> 정수형(atoi)
    {
        answer = atoi(a_str);
    }else
    {
        answer = atoi(b_str);
    }
    
    return answer;
}