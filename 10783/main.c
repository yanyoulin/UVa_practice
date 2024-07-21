#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n, a, b;
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d\n", &a);
        scanf("%d", &b);
        int sum = 0;
        for(int j = a; j<=b; j++)
        {
            if(j%2 == 1)
                sum += j;
        }
        printf("Case %d: %d\n", i + 1, sum);
    }
    return 0;
}
