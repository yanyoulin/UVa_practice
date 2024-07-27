#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s[40];
    long long int a;
    while(scanf("%lld", &a) != EOF)
    {
        if(a == 0) break;
        int sum = 0;
        int i = 0;
        while(a!=0)
        {
            s[i] = a%2;
            if(a%2 == 1) sum+=1;
            a = a/2;
            i++;
        }
        printf("The parity of ");
        for(int j = i - 1; j>=0; j--)
        {
            printf("%d", s[j]);
        }
        printf(" is %d (mod 2).\n", sum);
    }
    return 0;
}
