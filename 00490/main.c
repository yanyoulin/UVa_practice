#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char line[100][100];
    int length[100];
    int n = 0;
    int maxLen = 0;
    while(gets(line[n]))
    {
        length[n] = (int)strlen(line[n]);
        if(length[n]>maxLen)
            maxLen = length[n];
        n++;
    }

    for(int j = 0; j<maxLen; j++)
    {
        int upbound = 0;
        if(j>=length[upbound])
            upbound++;
        for(int i = n-1; i >= upbound; i--)
        {
            if(j<length[i])
                printf("%c", line[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
