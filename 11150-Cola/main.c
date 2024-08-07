#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int count = n;
        while(n>=3)
        {
            int k = n;
            count += n/3;
            n = k/3 + k%3;
        }
        if(n == 2)
            printf("%d\n", count + 1);
        else
            printf("%d\n", count);
    }
    return 0;
}
