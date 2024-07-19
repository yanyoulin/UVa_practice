#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
}

int main(int argc, char** argv)
{
    int n;
    char d[2001][100];
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
    {
        gets(d[i]);
        int j;
        for(j = 0; d[i][j] != ' '; j++);
        d[i][j] = '\0';
    }
    qsort(d, n, 100, comp);
    int k = 0;
    int i;
    for(i = 0; i<n; i++)
    {
        if(strcmp(d[i], d[k]) != 0)
        {
            printf("%s %d\n", d[k], i-k);
            k = i;
        }
    }
    printf("%s %d\n", d[k], i-k);
    return 0;
}
