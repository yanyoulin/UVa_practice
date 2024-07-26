#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    char a[5];
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        long int deci = 0, hex = 0;
        scanf("%s", a);
        int ten = 1;
        int sixteen = 1;
        int sum_1 = 0, sum_2 = 0;
        for(int j=strlen(a) - 1; j>=0; j--)
        {
            deci += (a[j] - '0') * ten;
            ten = ten * 10;
        }
        while(deci!=0)
        {
            if(deci%2 == 1) sum_1+= 1;
            deci = deci/2;
        }
        for(int j=strlen(a) - 1; j>=0; j--)
        {
            hex += (a[j] - '0') * sixteen;
            sixteen = sixteen * 16;
        }
        while(hex!=0)
        {
            if(hex%2 == 1) sum_2+= 1;
            hex = hex/2;
        }
        printf("%ld %ld\n", sum_1, sum_2);
    }

    return 0;
}
