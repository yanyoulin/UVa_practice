#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[1000002];

int main()
{
    int ca = 0;
    while(scanf("%s\n", s) != EOF) //記得後面加上\n,否則會出問題
    {
        int n;
        int x, y;
        int min, max;
        ca++;
        printf("Case %d:\n", ca);
        scanf("%d\n", &n);
        for(int i = 0; i<n; i++)
        {
            int diff = 0;
            scanf("%d %d", &x, &y);
            if(x>=y)
            {
                max = x;
                min = y;
            }
            else
            {
                max = y;
                min = x;
            }
            for(int j = min; j<=max; j++)
            {
                if(s[min] != s[j])
                {
                    diff = 1;
                }
            }
            if(diff)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//char s[1000002];
//
//int main() {
//    int ca = 0;
//    while (gets(s) && s[0] != '\0') {  // 使用 gets 且檢查是否為空字串
//        int n;
//        int x, y;
//        ca++;
//        printf("Case %d:\n", ca);
//
//        scanf("%d", &n);
//        getchar(); // 清除緩衝區的換行符號
//
//        for (int i = 0; i < n; i++) {
//            int diff = 0;
//            scanf("%d %d", &x, &y);
//            getchar(); // 清除緩衝區的換行符號
//
//            int min = (x < y) ? x : y;
//            int max = (x > y) ? x : y;
//
//            char firstChar = s[min];
//            for (int j = min; j <= max; j++) {
//                if (s[j] != firstChar) {
//                    diff = 1;
//                    break;  // 一旦發現不同，立刻退出迴圈
//                }
//            }
//
//            if (diff)
//                printf("No\n");
//            else
//                printf("Yes\n");
//        }
//
//        getchar(); // 讀取並消耗可能存在的空行
//    }
//    return 0;
//}

