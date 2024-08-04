#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char **argv)
{
    long long int a; //�쥻�Ʀr�}�C����k�B�z�_�Ʀr�A�˹L�ӵ��GTLE
    while(scanf("%lld", &a) != EOF)
    {
        int p1 = 1, p2 = 1; //�P�_�O�_prime
        long long int b = 0;
        int k = a;
        while(k>0)
        {
            b = b*10 + (k%10);
            k = k/10;
        }
        for(int i = 2; i<=sqrt(a); i++) //�ήڸ��B�z�A���M�|TLE
        {
            if(a%i == 0)
            {
                p1 = 0;
                break;
            }
        }
        for(int i = 2; i<=sqrt(b); i++)
        {
            if(b%i == 0)
            {
                p2 = 0;
                break;
            }
        }
        if(a == b) p2 = 0;
        if(p1 && p2)
            printf("%lld is emirp.\n", a);
        else if(p1 == 0)
            printf("%lld is not prime.\n", a);
        else
            printf("%lld is prime.\n", a);
    }
    return 0;
}
