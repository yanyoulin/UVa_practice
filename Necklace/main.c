#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double V, V0;
    while(scanf("%lf %lf", &V, &V0) != EOF)
    {
        if(V == 0 && V0 == 0) break;
        int same = 0;
        double d, maxd = 0;
        int maxi = 0;
        for(int i = 1; (double)V/i > V0; i++)
        {
            d = 0.3 * sqrt((double)V/i - V0) * i;
            if(fabs(d - maxd) <= 1e-10) //記得誤差，然後絕對值函式記得加f
            {
                same = 1;
                break;
            }
            else if(d>maxd)
            {
                maxi = i;
                maxd = d;
            }
        }
        if(same) printf("0\n");
        else printf("%d\n", maxi);
    }
    return 0;
}
