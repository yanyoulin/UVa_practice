#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n;
    int c = 1;
    int d[100];
    while(scanf("%d", &n) != EOF)
    {
        int check = 0; //check如果是1表示條件沒通過
        int s[20000] = {0}; //d[i] + d[j] 最大可以是10000+10000
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &d[i]);
        }
        if(d[0] < 1) check = 1;
        if(!check)
        {
            for(int i = 0; i<n; i++)
            {
                for(int j = i; j<n; j++)
                {
                    int sum = d[i] + d[j];
                    if(s[sum]) check = 1;
                    s[sum] = 1;
                }
            }
        }
        if(check)
            printf("Case #%d: It is not a B2-Sequence.\n\n", c);
        else
            printf("Case #%d: It is a B2-Sequence.\n\n", c);
        c++;
    }
    return 0;
}
