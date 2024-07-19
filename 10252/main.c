#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}

int main(int argc, char **argv)
{
    char a[1001], b[1001];
    while(gets(a) != NULL && gets(b) != NULL)
    {
        qsort(a, strlen(a), sizeof(char), comp);
        qsort(b, strlen(b), sizeof(char), comp);
        for(int i = 0, j = 0; i<strlen(a) && j<strlen(b);)
        {
            if(a[i] == b[j] && a[i]!=' ' && b[i]!=' ')
            {
                printf("%c", a[i]);
                i++; j++;
            }
            else if(a[i]>b[j])
                j++;
            else
                i++;
        }
        printf("\n");
    }
    return 0;
}
