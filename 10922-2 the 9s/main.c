#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char s[1000];
    scanf("%s", s);
    while(s[0] != '0') //是0表示結束
    {
        int count = 1, sum = 0;
        for(int i = 0; i<strlen(s); i++)
        {
            sum+=(s[i] - '0');
        }
        while(sum>9)
        {
            int k = 0;
            while(sum>0)
            {
                k += sum%10;
                sum = sum/10;
            }
            count ++;
            sum = k;
        }
        if(sum != 9) printf("%s is not a multiple of 9.\n", s);
        else printf("%s is a multiple of 9 and has 9-degree %d.\n", s, count); //下面是錯誤寫法
//        int k = sum, j = sum;
//        if(sum%9 != 0)
//        {
//            printf("%s is not a multiple of 9.\n", s);
//        }
//        else
//        {
//            while(k>9)
//            {
//                int a = 0;
//                while(k>0)
//                {
//                    a += k%10;
//                    k = k/10;
//                }
//                count ++;
//                k = a;
//            }
//            printf("%s is a multiple of 9 and has 9-degree %d.\n", s, count);
//        }
        scanf("%s", s);
    }
    return 0;
}
