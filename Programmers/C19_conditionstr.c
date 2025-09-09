#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;
    
    //C에서 문자열(const char*)은 주소를 의미합니다. 
    //==는 포인터가 같은지를 비교할 뿐, 문자열 내용을 비교하지 않습니다.

    //따라서 "<"와 같은 문자열 내용을 비교하려면 strcmp 함수를 사용해야 합니다.
    if(strcmp(ineq, "<")==0 && strcmp(eq, "=")==0 && n <= m)
    {
        answer = 1;
    }
    else if(strcmp(ineq, "<")==0 && strcmp(eq, "!")==0 && n < m)
    {
        answer = 1;
    }
    else if(strcmp(ineq, ">")==0 && strcmp(eq, "=")==0 && n >= m)
    {
        answer = 1;
    }
    else if(strcmp(ineq, ">")==0 && strcmp(eq, "!")==0 && n > m)
    {
        answer = 1;
    }
    else
    {
        answer = 0;
    }
    
    return answer;
}