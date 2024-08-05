#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int x1, y1, x2, y2, n; //°O±olong long int
    scanf("%lld\n", &n);
    for(int i = 1; i<=n; i++)
    {
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        long long int a = x1 + y1;
        long long int b = x2 + y2;
        long long int sum = 0;
        for(long long int j = a; j<b; j++)
        {
            sum += j + 1;
        }
        printf("Case %d: %lld\n", i, sum - x1 + x2);
    }
    return 0;
}
