#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    ij 012345678901234
    0  "Hello world!
    1  C programing ya
    變成
    ji 10
    0  C"
    1   H
    2  pe
    3  rl
    4  ol
    5  go
    6  r
    7  aw
    8  mo
    9  ir
    10 nl
    11 gd
    12  !
    13 y
    14 a
    注意:13、14row不需要補空白
    所以我們用一個upbound紀錄輸出的每一個row的上界
*/

int main(int argc, char **argv)
{
    char line[100][100]; //line[幾行][幾個字元]
    int length[100]; //紀錄每個句子有幾個字元
    int n = 0;
    int maxLen = 0; //紀錄最常長度，後面用來處理upbound
    while(gets(line[n]))
    {
        length[n] = strlen(line[n]);
        if(length[n]>maxLen)
            maxLen = length[n];
        n++;
    }

    for(int j = 0; j<maxLen; j++)
    {
        int upbound = 0;
        if(j>=length[upbound])
            upbound++;
        for(int i = n-1; i >= upbound; i--)
        {
            if(j<length[i])
                printf("%c", line[i][j]);
            else //內層句子不夠長補空格，不用擔心最外層(有upbound限制住)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
