#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    char a_str[10] = ""; //문자열 초기화 꼭 해주기
    char b_str[10] = "";
    char temp[5] = "";
    
    for(int i = 0; i < num_list_len; i++)
    {
        if(num_list[i]%2 == 0)
        {
            sprintf(temp, "%d", num_list[i]);
            strcat(a_str,temp); //문자열 합치기 방법 외에 10을 곱해 자릿수를 바꿔주는 방법도 있음
        }else
        {
            sprintf(temp, "%d", num_list[i]);
            strcat(b_str,temp);
        }
    }
    
    answer = atoi(a_str) + atoi(b_str);
    
    return answer;
}