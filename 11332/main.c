#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    while(n)
    {
        while(n>9)
        {
            int sum = 0;
            while(n)
            {
                sum += n%10;
                n = n/10;
            }
            n = sum;
        }
        printf("%d\n", n);
        scanf("%d", &n);
    }
    return 0;
}
