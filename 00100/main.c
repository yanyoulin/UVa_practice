#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, i, j;
    while(scanf("%d %d", &a, &b)==2)
    {
        if(a>=b)
        {
            i = b; j = a;
        }
        else
        {
            i = a; j = b;
        }
        int max = 0;
        int count;
        for(int k = i; k<=j ; k++)
        {
            count = 0;
            int n = k;
            while(n!=1)
            {
                if(n%2 == 1)
                    n = 3*n + 1;
                else
                    n = n/2;
                count += 1;
            }
            count += 1;
            if(count > max)
                max = count;
        }
        printf("%d %d %d\n", a, b, max);
    }
    return 0;
}
