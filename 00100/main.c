#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, i, j;
    while(scanf("%d %d", &a, &b)==2) //輸出等於兩個整數時執行迴圈
    {
        if(a>=b) //題目沒說ab哪個大，所以先判斷
        {
            i = b; j = a;
        }
        else
        {
            i = a; j = b;
        }
        int max = 0;
        int count; //紀錄長度
        for(int k = i; k<=j ; k++)
        {
            count = 0;
            int n = k;
            while(n!=1)
            {
                if(n%2 == 1) //奇數
                    n = 3*n + 1;
                else
                    n = n/2;
                count += 1;
            }
            count += 1; //最後把最後一個1算進長度裡
            if(count > max)
                max = count;
        }
        printf("%d %d %d\n", a, b, max);
    }
    return 0;
}
