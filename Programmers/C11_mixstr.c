#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    int len = strlen(str1); // str1과 str2는 같은 길이로 가정
    char* answer = (char*)malloc(2 * len + 1); // 널 문자 포함
    //(char*)malloc(1) - 1byte만 배정한 것(바이트 단위로 메모리를 할당/char 타입은 1byte)

    for(int i = 0; i < len; i++) {
        answer[2*i]   = str1[i];
        answer[2*i+1] = str2[i];
    }
    
    answer[2*len] = '\0'; // 문자열 끝 표시
    return answer;
}