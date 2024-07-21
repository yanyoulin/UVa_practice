#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    int n;
    int s[3001]; //最多3000個數字+有幾個數字
    while(scanf("%d", &n) != EOF)
    {
        int dif[3001] = {0}; //開一個紀錄該差值是否存在，ex. 1跟2差1，那dif[1] = 1;表示差值1存在
        for(int i = 0; i<n; i++)
        {
            scanf("%d", &s[i]);
        }
        int count = 0; //用這方法判斷是否符合題目條件
        for(int i = 0; i<n-1; i++)
        {
            int dis = 0;
            dis = abs(s[i+1] - s[i]); //算距離
            if(dis <= n-1 && dis != 0) //距離必須是1~n-1
                dif[dis] = 1;
            if(dis > n-1 || dis == 0) //不符合題目的把count+1
                count ++;
        }
        for(int i = 1; i<=n-1; i++) //搜索每個dis(1到n-1)是否都存在
        {
            if(dif[i] != 1) //發現不存在，表示此數列不是jolly
                count ++; //不符合題目的把count+1
        }
        if(count == 0) //count是0代表通過所有條件
        {
            printf("Jolly\n");
        }
        else
        {
            printf("Not jolly\n");
        }
    }
    return 0;
}
