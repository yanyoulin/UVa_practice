#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    因為輸入的數字太大了，我們要用字串處理
*/
int main()
{
    char d[1001];
    scanf("%s", d);
    while(d[0]!='0')
    {
        int sum_odd = 0, sum_even = 0;
        for(int i = 0; i<strlen(d); i++)
        {
            if(i%2 == 1)
                sum_odd += d[i] - '0'; //字元減掉'0'才會是數字
            else
                sum_even += d[i] - '0';
        }
        if(abs(sum_odd - sum_even)%11 == 0)
            printf("%s is a multiple of 11.\n", d);
        else
            printf("%s is not a multiple of 11.\n", d);
        scanf("%s", d);
    }
    return 0;
}
