#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) //compare函式固定要(const void* a, const void* b)
{
    return *(int*)a - *(int*)b; //將a, b轉成int，若大於0=>a大於b; 這個函式會讓小的在前面
}

int main(int argc, char **argv)
{
    int n;
    int s[500]; //開個位置
    int r;
    scanf("%d\n", &n);
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &r);
        for(int j = 0; j<r; j++)
        {
            scanf("%d", &s[j]);
        }
        qsort(s, r, sizeof(int), comp);
        int median = s[r/2];
        int sum = 0;
        for(int j = 0; j<r; j++)
        {
            sum += abs(median - s[j]);
        }
        printf("%d\n", sum);
    }
    return 0;
}
