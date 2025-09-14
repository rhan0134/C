#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    int n1 = 1;
    int n2 = 0;
    
    for(int i =0; i < num_list_len; i++)
    {
        n1 *= num_list[i];
        n2 += num_list[i];
    }
    
    if(n1 < n2*n2)
    {
        answer = 1;
    }else
    {
        answer = 0;
    }
    
    //return mult < sum * sum;
    return answer;
}