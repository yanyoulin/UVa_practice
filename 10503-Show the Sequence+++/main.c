#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int a[51];

void sequence(char s[]) //遞迴函式從最內的S處理，一路向外，用a[]來記錄前一個遞迴之值用來計算
{
    int sign = 1, m = 0, i; //sign用來記錄此數字是否為負數
    char oper;
    for(i = 1; s[i] != NULL; i++)
    {
        if(s[i] == '-') sign = -1;
        else if(s[i] <= '9' && s[i] >= '0') //把m從char轉成int
        {
            m = 10*m + (s[i] - '0');
        }
        else
        {
            oper = s[i]; //測出"+", "*", "]"就停
            break;
        }
    }
    m = sign * m; //把正負補上
    if(oper == '+')
    {
        sequence(s + i + 1); //遞迴，得出的結果已經記錄在a[]中了
        long long int d = a[0]; //此a[0]為前一個遞迴的m
        a[0] = m; //這次遞迴得出的m放入a[0]進行更新
        for(int j = 1; j<=50; j++)
        {
            long long int temp = a[j]; //前一輪遞迴得出的a[j]
            a[j] = a[j - 1] + d; //Vi-1 + Si-1 (用j=1來看就是題目中的i=2，因為V2 = V1(此次遞迴之m) + S1(前次遞迴之m))
            d = temp; //進行下次計算
        }
    }
    else if(oper == '*')
    {
        sequence(s + i + 1);
        a[0] = a[0]*m; //前一輪遞迴的第一項先乘以此輪的m
        for(int j = 1; j<=50; j++)
            a[j] = a[j] * a[j - 1]; //再後項等於前項乘以原後項(Vi = Vi-1 * Si)
    }
    else //即為測到"]"，那就直接將得出的m存入a的每一項就好，進行下次遞迴用
    {
        for(int j = 0; j<=50; j++)
            a[j] = m;
    }
}

int main()
{
    int n;
    char s[1000];
    while(scanf("%s %d", s, &n) == 2)
    {
        for(int i = 0; i<=50; i++) //清空a，可直接用memset(a, 0, sizeof(a));
            a[i] = 0;
        sequence(s);
        for(int j = 0; j<n; j++)
        {
            if(j != n-1)
                printf("%lld ", a[j]);
            else
                printf("%lld\n", a[j]);
        }
    }
    return 0;
}
