#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        int d, p;
        int h[100];
        int count = 0;
        scanf("%d", &d);
        scanf("%d", &p);
        for(int j = 0; j<p; j++)
            scanf("%d", &h[j]);
        for(int j = 1; j<=d; j++)
        {
            int w = j%7; //判斷禮拜幾
            int hartal = 0;
            if(w>=1 && w<=5)
            {
                for(int k = 0; k<p; k++)
                {
                    hartal = hartal || (j%h[k] == 0); //只要有一個罷會就停會
                }
            }
            count+=hartal;
        }
        printf("%d\n", count);
    }
    return 0;
}
