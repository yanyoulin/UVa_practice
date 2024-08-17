#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//肈ヘ種ㄤ龟碞琌耞计琌Чキよ计2计Ωよ碞琌计ㄢΩ

int main()
{
    long long int a;
    while(scanf("%lld", &a) != EOF)
    {
        if(a == 0) break;
        int b = sqrt(a);
        if(b*b == a)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
