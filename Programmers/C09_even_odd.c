#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    if(a%2 == 0)
    {
        printf("%d is even", a); //printf("%d is %s", a, a%2==0?"even":"odd");
    }
    else
    {
        printf("%d is odd", a);
    }

    return 0;
}