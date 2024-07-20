#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b) //compare函式固定要(const void* a, const void* b)
{
    return *(char*)a - *(char*)b; //將a, b轉成char，若大於0=>a大於b; 這個函式會讓小的在前面
}

int main(int argc, char **argv)
{
    char a[1001], b[1001];
    while(gets(a) != NULL && gets(b) != NULL)
    {
        qsort(a, strlen(a), sizeof(char), comp); //用qsort做排序，qsort(目標陣列, 元素數量, 元素大小, 比較函數)
        qsort(b, strlen(b), sizeof(char), comp);
        for(int i = 0, j = 0; i<strlen(a) && j<strlen(b);) //每個字元從小到大去判斷
        {
            if(a[i] == b[j] && a[i]!=' ' && b[i]!=' ') //不能是空格，但這裡沒差
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
