#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    先把所以有音符的指法建表，後面方便查表
*/
int fin[14][11] =
{
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
    {0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0}
};

int main()
{
    int n;
    char s[200];
    int c[255]; //把音符a,b,c轉換成數字在對應到指法表，開到255是因為ascii code
    scanf("%d\n", &n);
    for(int t = 0; t<n; t++)
    {
        gets(s);
        int state[11] = {0}; //記錄上一個音符是否用到這隻手指
        //把音符a,b,c轉換成數字在對應到指法表，開到255是因為ascii code
        c['c'] = 0; c['d'] = 1; c['e'] = 2; c['f'] = 3; c['g'] = 4; c['a'] = 5; c['b'] = 6;
        c['C'] = 7; c['D'] = 8; c['E'] = 9; c['F'] =10; c['G'] =11; c['A'] =12; c['B'] =13;
        for(int k = 1; k<=10; k++) //用手指來做迴圈比較好做
        {
            int count = 0; //記錄按了幾次
            for(int i = 0; i<strlen(s); i++)
            {
                int a = c[s[i]];
                if(state[k] == 0 && fin[a][k] == 1) //上一個有按這一個沒按，則按的次數要+1
                {
                    count++;
                    state[k] = 1;
                }
                if(fin[a][k] == 0) //這次沒按的話要把狀態歸0
                    state[k] = 0;
            }
            if(k<10) printf("%d ", count);
            else printf("%d\n", count);
        }
    }
    return 0;
}
