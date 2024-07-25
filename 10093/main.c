#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    給一個字串，找出他最小是幾進制數N，使得這個字串在N進制下轉換成的十進制數能夠整除N-1
    ex.
        (233)5 中2+3+3=8可以被(5-1=4)整除
*/

int main(int argc, char **argv)
{
    char s[10001];
    while(scanf("%s", s) != EOF) //讀取字串
    {
        int sum = 0;
        int max = 1;
        for(int i = 0; i<strlen(s); i++)
        {
            int d = 0; //不要直接用s[i]去更新，因為s[i]是char型態，後面會出問題
            if(s[i]>='0' && s[i]<='9') d = s[i] - '0';
            else if(s[i]>='A' && s[i]<='Z') d = s[i] - 'A' + 10;
            else if(s[i]>='a' && s[i]<='z') d = s[i] - 'a' + 36;
            sum += d;
            if(d > max) max = d; //N進制又比字串中最大的數字大
        }
        int j;
        for(j = max + 1; j<=62; j++)
        {
            if(sum%(j-1) == 0) break;
        }
        if(j <= 62) printf("%d\n", j);
        else printf("such number is impossible!\n");
    }
    return 0;
}
