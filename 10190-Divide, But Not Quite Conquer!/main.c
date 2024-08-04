#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    long long int n, m;
    while(scanf("%lld %lld", &n, &m) != EOF)
    {
        long long int s[100];
        int k = 0;
        int bor = 0;
        if(n == 0) bor = 1; //n有可是0
        for(; n>0;)
        {
            if(m == 0 || m == 1) //除數是0、1時會出問題
            {
                bor = 1;
                break;
            }
            s[k] = n;
            k++;
            if(n == 1) break;
            if(n%m != 0)
            {
                bor = 1;
                break;
            }
            n = n/m;
        }
        if(bor)
            printf("Boring!\n");
        else
        {
            for(int i = 0; i<k-1; i++)
            {
                printf("%lld ", s[i]);
            }
            printf("%lld\n", s[k-1]);
        }
    }
    return 0;
}
