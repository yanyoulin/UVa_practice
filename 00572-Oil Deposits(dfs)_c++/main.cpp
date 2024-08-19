#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

char a[101][101];
int dx[8] = {-1, 0, 1,-1, 1,-1, 0, 1}; //以便探索八個方向
int dy[8] = {-1,-1,-1, 0, 0, 1, 1, 1};
int m, n;
void dfs(int x, int y) //這邊選擇用dfs，bfs也可以
{
    if(x>=n || x<0 || y>=m || y<0)
        return;
    if(a[x][y] != '@')
        return;
    a[x][y] = '*'; //將@轉成*
    for(int i = 0; i<8; i++)
        dfs(x + dx[i], y + dy[i]); //dfs
}

int main()
{
    while(scanf("%d %d\n", &m, &n) != EOF && m!=0 && n!=0)
    {
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
                cin>>a[j][i];
        }
        int cnt = 0;
        for(int i = 0; i<m; i++)
        {
            for(int j = 0; j<n; j++)
            {
                if(a[j][i] == '@')
                {
                    dfs(j, i);
                    cnt++; //一個油田探索完後就+1
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
