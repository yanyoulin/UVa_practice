#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi acos(-1)
/*
    中間斜線區域為:正方形-4*鐮刀
    其他點狀區域為:4*扇形-4*直角三角形-2*斜線區域
    剩下的區域為:正方形-前面算的
*/
int main()
{
    double n;
    while(scanf("%lf", &n) != EOF)
    {
        double a, b, c;
        a = n*n*(1 - 4*(pi/12 - (pi/6 - sqrt(3)/4) ) );
        b = n*n*(pi - 2) - 2*a;
        c = n*n - a - b;
        printf("%.3lf %.3lf %.3lf\n", a, b, c);
    }
    return 0;
}
