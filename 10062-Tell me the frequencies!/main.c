#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(int argc, char **argv)
{
    char s[1000];

    while(gets(s) != NULL) //用gets讀取整行，不要用scanf("%s", s)，會出錯
    {
        int c[128] = {0};
        char d;
        for(int i = 0; i<strlen(s); i++)
        {
            d = s[i];
            c[d]+=1;
        }
        int max = 0;
        for(int j = 32; j<128; j++)
        {
            if(c[j] > max) max = c[j];
        }
        int f = 1;
        while(f != max + 1)
        {
            for(int j = 127; j>=32; j--)
            {
                if(c[j] == f)
                    printf("%d %d\n", j, f);
            }
            f++;
        }
    }
    return 0;
}
