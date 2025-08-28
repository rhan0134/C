#include <stdio.h>
#define LEN_INPUT 10

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    //아스키 코드
    //A(65) ~ Z(90)
    //a(97) ~ z(122)
    for(int i=0; i < strlen(s1); i++) //배열 크기 - sizeof(), 문자열 길이 - strlen()
    {
        if(s1[i] >= 65 && s1[i] <= 90) //(s1[i] >= 'A' && s1[i] <= 'Z') or isupper(s1[i])
        {
            s1[i] += 32; //tolower(s1[i])
        }
        else if(s1[i] >= 97 && s1[i] <= 122) //(s1[i] >= 'a' && s1[i] <= 'z') or islower(s1[i])
        {
            s1[i] -=32; //toupper(s1[i])
        }
        else
        {
            printf("알파벳이 아닙니다");
        }
    }
    
    printf("%s", s1);

    return 0;
}