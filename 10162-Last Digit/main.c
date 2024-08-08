#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
/*
    ノ祘Α禲т砏и穦祇瞷N^N穦20碻吏
    翴琌last digitN = 1000┮ぃ恨计秨
    惠璶臮100计矪瞶碞
    т砏祘Α程┏
*/
int main() //惠璶璸衡程计Ωよ碞
{
    char n[102];
    while(scanf("%s", n) != EOF)
    {
        if(n[0] == '0') break;
        int num = 0;
        if(strlen(n)>=2)
            num = (n[strlen(n) - 2] - '0') * 10 + (n[strlen(n) - 1] - '0');
        else
            num = n[strlen(n) - 1] - '0';
        int a = 0, b;
        for(int i = 1; i<=num; i++)
        {
            b = i;
            for(int j = 1; j<i; j++) //矪瞶程计Ωよ
            {
                b = (b*i) % 10; //–Ω常埃10緇计
            }
            a += b;
            a = a%10;
        }
        printf("%d\n", a);
    }
    return 0;
}
//int main()
//{
//    int a = 0, b;
//    for(int i = 1; i<=100; i++)
//    {
//        b = i;
//        for(int j = 1; j<i; j++)
//        {
//            b = (b*i) % 10;
//        }
//        a += b;
//        a = a%10;
//        printf("a = %d; b = %d\n", a, b);
//    }
//    return 0;
//}

