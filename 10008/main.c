#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    char c;
    char line[1000];
    int count[96]={0};
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        gets(line);
        for(int j = 0; j<strlen(line); j++)
        {
            c = line[j];
            if(c>='a' && c<='z')
                c-=32;
            if(c>='A' && c<='Z')
                count[c]+=1;
        }
    }
    int max = 0;
    for(c='A'; c<='Z'; c++)
    {
        if(count[c]>max)
            max = count[c];
    }
    int f = max;
    while(f)
    {
        for(c='A'; c<='Z'; c++)
        {
            if(count[c] == f)
                printf("%c %d\n", c, f);
        }
        f -= 1;
    }
    return 0;
}
