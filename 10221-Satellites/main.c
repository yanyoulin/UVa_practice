#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi acos(-1) //這樣可以定義準確的pi

int main()
{
    double a, b;
    char s[5];
    while(scanf("%lf %lf %s", &a, &b, s) != EOF)
    {
        if(strcmp(s, "min") == 0) //用strcmp去判斷字串是否為"min"
            b = b/60.0; //60 minutes(弧分) = 1 degree
        double arc, chor;
        arc = 2.0 * (a + 6440.0) * pi * b / 360.0;
        chor =  2.0 * (a + 6440.0) * sin(b * pi / 360.0); //math函式庫中好像都是用弧度不是度
        printf("%.6lf %.6lf\n", arc, chor);
    }
    return 0;
}
