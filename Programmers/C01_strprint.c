//문자열 출력하기-https://school.programmers.co.kr/learn/courses/30/lessons/181952

#include <stdio.h>
#define LEN_INPUT 1000001

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1); //문자열 배열 - s1 == &s1[0]
    printf("%s", s1); //반드시 이 형태로 작성해야 안전함
    return 0;
}