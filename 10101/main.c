#include <stdio.h>
#include <stdlib.h>

void bangla(long long int a)
{
    if(a >= 10000000)
    {
        bangla(a/10000000);
        printf(" kuti");
        a = a%10000000;
    }
    if(a >= 100000)
    {
        printf(" %lld lakh", a/100000);
        a = a%100000;
    }
    if(a >= 1000)
    {
        printf(" %lld hajar", a/1000);
        a = a%1000;
    }
    if(a >= 100)
    {
        printf(" %lld shata", a/100);
        a = a%100;
    }
    if(a)
    {
        printf(" %lld", a);
    }
}

int main(int argc, char** argv)
{
    long long int a;
    int count = 0;
    while(scanf("%lld", &a) != EOF)
    {
        count+=1;
        printf("%4lld.", count);
        if(a == 0)
            printf(" 0");
        else
            bangla(a);
        printf("\n");
    }
    return 0;
}
