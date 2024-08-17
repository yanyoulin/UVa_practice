#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//題目的意思其實就是判斷數字是否為完全平方數，因為2的倍數次方就是否數字按了兩次

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
