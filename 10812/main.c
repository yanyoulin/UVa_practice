#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    int s, d;
    int a, b;
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d %d", &s, &d);
        if(d > s || (s%2) != (d%2))
            printf("impossible\n");
        else
        {
            for(a = 0, b = s; a <= b; a++, b--)
            {
                if(b - a == d)
                    break;
            }
            printf("%d %d\n", b, a);
        }
    }
    return 0;
}
