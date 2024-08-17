#include <stdio.h>
#include <stdlib.h>

int comp(const void*a, const void*b)
{
    return *(int*)a - *(int*)b;
}

int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        if(n == 0) break;
        int s[10001][5];
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<5; j++)
            {
                scanf("%d", &s[i][j]);
            }
            qsort(s[i], 5, sizeof(int), comp);
        }
        int max = 0, count, total; //因為有可能有兩組人上不同的修課組合，所以不能單純看兩組人是否修課相同，還要去跟可能的其他組合比較人數
        int c[10001] = {0}; //來檢查此位同學是否被計入組合過了，被計入不能再算一次，沒被計入的才需要更新
        for(int i = 0; i<n; i++)
        {
            count = 1;
            for(int j = i+1; j<n; j++)
            {
                if(memcmp(s[i], s[j], 5*sizeof(int)) == 0) //類似strcmp的比較函式，要提供size
                {
                    count++;
                    c[j] = 1; //表示此學生被計算過
                }
            }
            if(c[i] != 1) //第i學生(目標學生)沒被計算過=>更新人數
            {
                if(count > max)
                {
                    max = count;
                    total = max;
                }
                else if(count == max) //若有兩個選課組合人數相同就加起來
                {
                    total = total + max;
                }
            }
        }
        printf("%d\n", total);
    }
    return 0;
}


