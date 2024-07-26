#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long long int s[45]; //記得用long int
    s[0] = 1;
    s[1] = 1;
    for(int i = 2; i<45; i++)
    {
        s[i] = s[i-1] + s[i-2];
    }
    int n, d;
    scanf("%d\n", &n);
    for(int j = 0; j<n; j++)
    {
        scanf("%d", &d);
        int k;
        for(k = 45; k>0; k--)
        {
            if(s[k]<=d) break; //找出輸出要從費氏數列哪個位置開始，再處理輸出
        }
        printf("%d = ", d);
        for(; k>0; k--)
        {
            if(s[k]<=d)
            {
                printf("1");
                d = d - s[k];
            }
            else
            {
                printf("0");
            }
        }
        printf(" (fib)\n");
    }
    return 0;
}
