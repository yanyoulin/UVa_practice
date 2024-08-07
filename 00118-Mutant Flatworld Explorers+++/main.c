#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, m, x, y;
    int fallxy[51][51] = {0}; //紀錄機器人掉下去的前一個地方
    char w;
    char s[102];
    scanf("%d %d\n", &n, &m);
    while(scanf("%d %d %c\n", &x, &y, &w) != EOF)
    {
        int d[101]; //用來記錄每一個步驟的方位
        //a%4 north:0; east:1; south:2; west:3;
        char way;
        if(w == 'N') d[0] = 100;
        if(w == 'E') d[0] = 101;
        if(w == 'S') d[0] = 102;
        if(w == 'W') d[0] = 103;
        gets(s);
        int i;
        int fall = 0; //判斷是否掉下去
        for(i = 0; i<strlen(s); i++)
        {
            if(s[i] == 'R')
            {
                d[i+1] = d[i] + 1;
            }
            if(s[i] == 'L')
            {
                d[i+1] = d[i] - 1;
            }
            if(s[i] == 'F')
            {
                if(d[i]%4 == 0) y++;
                if(d[i]%4 == 1) x++;
                if(d[i]%4 == 2) y--;
                if(d[i]%4 == 3) x--;
                d[i+1] = d[i] + 0;
                if(x>n)
                {
                    x--;
                    if(fallxy[x][y] == 0)
                    {
                        fallxy[x][y] = 1;
                        fall = 1;
                        break;
                    }
                }
                if(x<0)
                {
                    x++;
                    if(fallxy[x][y] == 0)
                    {
                        fallxy[x][y] = 1;
                        fall = 1;
                        break;
                    }
                }
                if(y>m)
                {
                    y--;
                    if(fallxy[x][y] == 0)
                    {
                        fallxy[x][y] = 1;
                        fall = 1;
                        break;
                    }
                }
                if(y<0)
                {
                    y++;
                    if(fallxy[x][y] == 0)
                    {
                        fallxy[x][y] = 1;
                        fall = 1;
                        break;
                    }
                }
            }
        }
        if(d[i]%4 == 0) way = 'N';
        if(d[i]%4 == 1) way = 'E';
        if(d[i]%4 == 2) way = 'S';
        if(d[i]%4 == 3) way = 'W';
        if(fall)
            printf("%d %d %c LOST\n", x, y, way);
        else printf("%d %d %c\n", x, y, way);
    }
    return 0;
}

/*
網路上的解法(我解得太慢了)
int main(){
    int m, n, x, y, x2, y2, dir, i;
    char c, inst[102];
    char orient[5]="ESWN"
    int move[4][2]={{1, 0}, {0, -1}, {-1, 0}, {0, 1}};
    int scent[51][51]={0};
    scanf("%d%d", &m, &n);
    while(scanf("%d %d %c", &x, &y, &c) != EOF)
    {
        for(dir=0; dir<4; dir++)
            if(c==orient[dir]) break;
        scanf("%s", inst);
        for(i=0; i<strlen(inst);i++)
        {
            if(inst[i]=='F')
            {
                x2 = x + move[dir][0];
                y2 = y + move[dir][1];
                if(x2<0 || y2<0 ||x2>m || y2>n)
                {
                    if(scent[x][y]==0)
                    {
                        scent[x][y]=1;
                        printf("%d %d %c LOST\n", x, y, orient[dir]);
                        break;
                    }
                }
                else x =x2; y = y2;
            }
        }
        else if(inst[i]=='R')
        {
            dir=(dir+1)%4;
        }
        else if(inst[i]=='L')
        {
            dir=(dir+3)%4;
        }
        if(i==strlen(inst)) printf("%d %D %c\n", x, y, orient[dir]);
    }
    return;
}
*/
