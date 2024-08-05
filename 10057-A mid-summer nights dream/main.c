#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    題目意思較模糊
    原題目輸出:
        對於每組測資，輸出三個整數。
        第一個數字是能得到該算式最小值的A。(所有能讓式子為最小數的A值中的最小值)
        第二個數字是|Xi − A|為最小值的數量。(X數列中有幾個能是A，數字可以重複)
        第三行數字是可能有幾種最小值。(不限於在X中，所有可能的A有幾個，數字不可重複)
*/
int s[1000000]; //不可寫在main裡，程式會跑不動
/*
    這裡是原因:
        棧空間限制：本地變數（定義在函式內的變數）存儲在棧上，棧空間通常較小（幾百KB到幾MB不等）。
        全局變數/靜態變數的堆空間：全局變數和靜態變數存儲在程式的資料段（data segment）或 BSS 段，這些空間通常較大。
*/

int comp(const void *a, const void *b) //比較函式
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int max = 0, min = 0;
        for(int i = 0; i<n; i++)
            scanf("%d", &s[i]);
        qsort(s, n, sizeof(int), comp);
        if(n%2 == 1)
            max = min = s[n/2];
        else
        {
            max = s[n/2];
            min = s[n/2 - 1];
        }
        int count = 0;
        for(int i = 0; i<n; i++) //這裡是為了把重複的數字抓出來
        {
            if(s[i]>=min && s[i]<=max) count++;
        }
        printf("%d %d %d\n", min, count, max - min + 1);
    }
    return 0;
}
