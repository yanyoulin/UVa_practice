#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[101][101];
int n, m;

int countBomb(int x, int y) //檢查九宮格內是否有炸彈
{
    int top, bottom, left, right;
    top = x - 1;
    bottom = x + 1;
    left = y - 1;
    right = y + 1;
    int count = 0;
    if(s[top][y] == '*') count++;
    if(s[top][left] == '*') count++;
    if(s[top][right] == '*') count++;
    if(s[x][left] == '*') count++;
    if(s[x][right] == '*') count++;
    if(s[bottom][left] == '*') count++;
    if(s[bottom][y] == '*') count++;
    if(s[bottom][right] == '*') count++;
    return count;
}

int main()
{
    int c = 0;
    while(scanf("%d %d", &n, &m) != EOF)
    {
        c++;
        scanf("\n"); //記的加，不然會錯
        if(n == 0 && m == 0) break;
        for(int i = 0; i<n; i++)
        {
            gets(s[i]);
        }
        printf("Field #%d:\n", c);
        for(int i = 0; i<n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(s[i][j] == '*') printf("*");
                else printf("%d", countBomb(i, j));
            }
            printf("\n");
        }
    }
    return 0;
}
