#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi acos(-1)
/*
    �����׽u�ϰ쬰:�����-4*�I�M
    ��L�I���ϰ쬰:4*����-4*�����T����-2*�׽u�ϰ�
    �ѤU���ϰ쬰:�����-�e���⪺
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
