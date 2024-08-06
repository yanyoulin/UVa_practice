#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[1000000][31] = {0};

int comp(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b); //我們要比較字串大小
    //strcmp會開始比較每一個字串的第一個字元。如果它們彼此相等，它會繼續進行下列配對，直到字元不同或到達較短字串的結尾為止。
    //若是1=>a比b大
}

int main()
{
    int n;
    scanf("%d", &n);
    scanf("\n\n"); //要多輸入一次enter
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<count; j++) //把前一次輸入的清空
            s[j][0] = '\0';
        count = 0;
        gets(s[count]); //讀第一個字串
        while(strlen(s[count]) != 0) //字串不是空的話進入迴圈，把所有要讀的字串每個迴圈讀一個
        {
            count++;
            gets(s[count]);
        }
        qsort(s, count, 31, comp); //用qsort做排序，qsort(目標陣列, 元素數量, 元素大小, 比較函數)
        int k = 0;
        int j;
        for(j = 0; j<count; j++)
        {
            if(strcmp(s[j], s[k]) != 0) //照qsort的結果從第0位置開始往下慢慢兩兩比較，!= 0 表示字串不同
            {
                printf("%s %.4lf\n", s[k], 100.0 * (j - k) / count); //將找到不同的那個位置(j)減掉k(最一開始是0，因為是開頭)，就是有多少棵一樣的樹
                k = j; //k變成是找到不同的那個位置
            }
        }
        printf("%s %.4lf\n", s[k], 100.0 * (j - k) / count); //最後會找超出陣列大小，所以要補這行印出最後一個結果
        if(i<n-1) printf("\n"); //是最後一個測資的話不要輸出換行
    }
    return 0;
}
