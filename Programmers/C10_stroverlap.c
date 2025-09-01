#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 동적할당 / dynamic memory allocation
 - 프로그램 실행 중에 메모리 크기를 유연하게 정하려고(malloc, calloc, realloc)
 - 스택 대신 힙을 쓰기 위해
 - 데이터 구조를 유연하게 만들기 위해
 */

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1);
    //동적할당을 쓴 이유
    // - 함수 종료 후에도 메모리가 유지됨 (지역변수는 함수 종료 시 소멸)
    // - 입력 문자열은 const char* (상수 포인터)로 주어지므로, 수정 불가
    // - 원본 문자열을 보존하면서, 수정 가능한 복사본을 만들기 위해서
    //=> 새로운 버퍼(answer)를 malloc으로 만들고, 그 안에 my_string을 복사한 다음 overwrite_string으로 덮어쓰기

    //동적 할당을 한 의미가 거의 없어짐
    // answer는 이제 my_string을 가리킴 (malloc 한 메모리 주소는 잃어버림)
    // 메모리 누수(memory leak) 발생
    answer = my_string; //새로운 문자열을 만드는 게 아니라, 같은 문자열을 가리키는 포인터가 하나 더 생기는 것뿐
    // 동적할당을 쓰려면 반드시 새로운 버퍼를 만들고, 원본을 복사한 뒤 수정해야함
    // strcpy(answer, my_string); // #include <string.h> 필요
    
    for(int i = s; i < s + strlen(overwrite_string); i++)
    {
	    answer[i] = overwrite_string[i-s]; //answer[s+i] = overwrite_string[i];
    }
    //memcpy(&answer[s], overwrite_string, len);
    //memcpy(데이터가 복사되는 주소/복사할 위치(To), 복사할 원본 주소(From), 복사할 크기(Byte/len))
    
    return answer;
}