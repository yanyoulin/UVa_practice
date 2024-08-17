#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int win[1000000] = {0};

int main()
{
    int r, w, i;
    while(scanf("%d %d", &r, &w) == 2)
    {
        int s[10];
        for(i = 0; i<w; i++)
        {
            scanf("%d", &s[i]);
        }
        for(i = 1; i<=r; i++) //判斷在石頭剩多少的情況下的勝負
        {
            win[i] = 0;
            for(int j = 0; j<w; j++)
            {
                if(i - s[j] >= 0) //石頭數量 - 一次可以拿多少石頭
                {
                    if(win[i - s[j]] == 0) //此表示第二位在( 石頭數量 - 一次可以拿多少石頭 )時是無法勝利的，也就是第一位勝利
                    {
                        win[i] = 1; //第一個人贏
                        break;
                    }
                }
            }
        }
        if(win[r] == 1)
            printf("Stan wins\n");
        else
            printf("Ollie wins\n");
    }
    return 0;
}
