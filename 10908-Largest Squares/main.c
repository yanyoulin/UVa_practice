#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[100][100];
int m,n;
int isSquare(int r, int c, int radius) //判斷在已知radius下，此空間是否為正方形
{
    int top, bottom, left, right;
    char mid = s[r][c];
    top = r - radius; //此正方形的最上下左右
    bottom = r + radius;
    left = c - radius;
    right = c + radius;
    if(top < 0 || bottom >= m || left < 0 || right >= n) //超出界線return 0
        return 0;
    for(int i = top; i <= bottom; i++)
    {
        for(int j = left; j <= right; j++)
        {
            if(s[i][j] != mid) return 0; //找出不同就return 0
        }
    }
    return 1;
}

int main(int argc, char **argv)
{
    int t, q, r, c;
    scanf("%d", &t);
    for(int k = 0; k<t; k++)
    {
        scanf("%d %d %d\n", &m, &n, &q);
        for(int i = 0; i<m; i++)
        {
            gets(s[i]); //記好這用法，第一次解題時用雙重迴圈結果讀取不出來
        }
        printf("%d %d %d\n", m, n, q);

        for(int i = 0; i<q; i++)
        {
            int radius = 0;
            scanf("%d %d", &r, &c);
            while(isSquare(r, c, radius))
            {
                radius++;
            }
            printf("%d\n", radius*2 - 1);
        }

    }
    return 0;
}
