#include <stdio.h>
#include <stdlib.h>

//其實就是費氏數列

int main()
{
    int a;
    long long int f[100];
    f[1] = 1;
    f[2] = 2;
    f[3] = 3;
    for(int i = 4; i<100; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    while(scanf("%d", &a) != EOF)
    {
        if(a == 0) break;
        printf("%lld\n", f[a]);
    }
    return 0;
}
