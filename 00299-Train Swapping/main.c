#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , t;
    int s[51];
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d" , &t);
        for(int j = 0; j<t; j++)
        {
            scanf("%d", &s[j]);
        }
        int count = 0;
        int c = t;
        while(c--) //bubble sort
        {
            for(int k = 0; k<t-1; k++)
            {
                int a = s[k], b = s[k+1];
                if(a > b)
                {
                    s[k] = b;
                    s[k+1] = a;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", count);
    }
    return 0;
}
