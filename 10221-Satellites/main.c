#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define pi acos(-1) //�o�˥i�H�w�q�ǽT��pi

int main()
{
    double a, b;
    char s[5];
    while(scanf("%lf %lf %s", &a, &b, s) != EOF)
    {
        if(strcmp(s, "min") == 0) //��strcmp�h�P�_�r��O�_��"min"
            b = b/60.0; //60 minutes(����) = 1 degree
        double arc, chor;
        arc = 2.0 * (a + 6440.0) * pi * b / 360.0;
        chor =  2.0 * (a + 6440.0) * sin(b * pi / 360.0); //math�禡�w���n�����O�Ω��פ��O��
        printf("%.6lf %.6lf\n", arc, chor);
    }
    return 0;
}
