#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(code)+1);
    
    int mode = 0;
    int j = 0;
    
    for(int i = 0; i < strlen(code); i++)
    {
        if(mode == 0)
        {
            if(code[i] == '1')
            {
                mode = 1; //mode = 1 - mode
            }else{
                if(i%2 == 0){
                    answer[j] = code[i];
                    j++;
                }
            }
            
        }else{
            
            if(code[i] == '1')
            {
                mode = 0;
            }else{
                if(i%2 != 0){
                    answer[j] = code[i];
                    j++;
                }
            }
        }
    }
    
    answer[j] = '\0';
    
    if(answer[0] == '\0')
    {
        return "EMPTY";
    }else
    {
        return answer;
    }

}