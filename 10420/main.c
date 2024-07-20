#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* a, const void* b) //compare函式固定要(const void* a, const void* b)
{
    return strcmp((char*)a, (char*)b);
    //strcmp會開始比較每一個字串的第一個字元。如果它們彼此相等，它會繼續進行下列配對，直到字元不同或到達較短字串的結尾為止。
    //若是1=>a比b大
}

int main(int argc, char** argv)
{
    int n;
    char d[2001][100]; //最多2000筆輸入
    scanf("%d\n", &n);
    for(int i=0; i<n; i++)
    {
        gets(d[i]);
        int j;
        for(j = 0; d[i][j] != ' '; j++); //找出第一個空格後，前面的就是國籍，後面是姓名
        d[i][j] = '\0'; //空格換成終止
    }
    qsort(d, n, 100, comp); //用qsort做排序，qsort(目標陣列, 元素數量, 元素大小, 比較函數)
    int k = 0;
    int i;
    for(i = 0; i<n; i++) //用一個很酷的計算人數的方法
    {
        if(strcmp(d[i], d[k]) != 0) //照qsort的結果從遞0位置開始往下慢慢兩兩比較，發現不同代表國家換了
        {
            printf("%s %d\n", d[k], i-k); //將找到不同的那個位置減掉k(最一開始是0，因為是開頭)，就是該國人數
            k = i; //k變成是找到不同的那個位置
        }
    }
    printf("%s %d\n", d[k], i-k); //最後會找超出n，所以要補這行印出最後一個國家的結果
    return 0;
}
