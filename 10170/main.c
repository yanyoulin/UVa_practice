#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long long int n, d; //第一團人數, 第幾天
    while(scanf("%lld %lld", &n, &d) != EOF) //記得加lld喔!
    {
        long long int sum = 0;
        while(1)
        {
            sum += n;
            if(sum >= d) break;
            n ++;
        }
        printf("%lld\n", n);
    }
    return 0;
}
