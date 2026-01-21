//오버플로우
#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    int a,b;

    scanf("%d", &T);

    for(int i=0; i < T; i++)
    {
        scanf("%d %d", &a, &b);
        int result = 1;
        for(int j=0; j < b; j++)
        {
            result = (result*a)%10;

        }

         if(result != 0)
        {
          printf("%d", result);   
        }
        else{
            printf("%d", 10);
        }

        return 0;

    }
}

//다른 방법
#include <stdio.h>

int main() {
    int T;
    int a, b;

    if (scanf("%d", &T) == 0) return 0;

    for (int i = 0; i < T; i++) {
        scanf("%d %d", &a, &b);

        int result = 1;
        // b번 곱하면서 매번 일의 자리만 남김
        for (int j = 0; j < b; j++) {
            result = (result * a) % 10;
        }

        // 결과가 0이면 10번 컴퓨터를 의미함
        if (result == 0) {
            printf("10\n");
        } else {
            printf("%d\n", result);
        }
    }
    return 0;
}