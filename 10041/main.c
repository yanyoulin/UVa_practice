#include <stdio.h>
#include <stdlib.h>

int comp(const void *a, const void *b) //compare�禡�T�w�n(const void* a, const void* b)
{
    return *(int*)a - *(int*)b; //�Na, b�নint�A�Y�j��0=>a�j��b; �o�Ө禡�|���p���b�e��
}

int main(int argc, char **argv)
{
    int n;
    int s[500]; //�}�Ӧ�m
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
