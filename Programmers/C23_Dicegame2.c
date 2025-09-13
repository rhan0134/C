#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    if ( a != b && b != c && c != a)
    {
        answer = a + b + c;
    }
    else if((a == b && b != c) || (b == c && c != a) || (a == c && b != a))
    {
        answer = (a + b + c) * (a*a + b*b + c*c); //pow
            
    }else if(a == b && b == c && c == a)
    {
        answer = (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    }
    
    return answer;
}

/* 인상깊었던 풀이
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) {
    int answer = 0;
    int matchCnt = 0;
    if(a == b) matchCnt++;
    if(a == c) matchCnt++;
    if(b == c) matchCnt++;

    switch(matchCnt){
        case 0:
            answer = a + b + c;
            break;
        case 1:
            answer = (a + b + c) * (a*a + b*b + c*c);
            break;
        default:
            answer = (a + b + c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
            break;
    }


    return answer;
}
*/