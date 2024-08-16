#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[6];
    int n;
    scanf("%d\n", &n);
    while(n--)
    {
        scanf("%s", s);
        int minute = 600*(s[0] - '0') + 60*(s[1] - '0') + 10*(s[3] - '0') + (s[4] - '0'); //不需要處理":"，全部換分鐘就不用考慮字串處理
        int hh, mm;
        while(1)
        {
            minute++;
            if(minute >= 1440) minute = 0; //23:59->00:00
            hh = minute/60;
            mm = minute%60;
            if(hh == 0) //忽略hh前導0
            {
                if(mm<10 || mm/10 == mm%10)
                {
                    printf("00:%d%d\n", mm/10, mm%10);
                    break;
                }
            }
            else if(hh < 10) //忽略hh前導0
            {
                if(mm%10 == hh)
                {
                    printf("0%d:%d%d\n", hh, mm/10, mm%10);
                    break;
                }
            }
            else
            {
                if(mm/10 == hh%10 && mm%10 == hh/10)
                {
                    printf("%d%d:%d%d\n", hh/10, hh%10, mm/10, mm%10);
                    break;
                }
            }
        }
    }
    return 0;
}
