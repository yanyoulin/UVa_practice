#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b) //找最大公因數
{
    int c = 0;
    while(b>0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main(int argc, char **argv)
{
    int a;
    while(scanf("%d", &a) != EOF)
    {
        if(a == 0) break;
        int i, j;
        int g = 0;
        for(i = 1; i<a; i++)
        {
            for(j = i+1; j<=a; j++)
            {
                g += GCD(i, j);
            }
        }
        printf("%d\n", g);
    }
    return 0;
}
