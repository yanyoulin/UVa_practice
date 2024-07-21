#include <stdio.h>
#include <stdlib.h>
#include <math.h> //我們要用pow()算次方

int main()
{
    int n;
    scanf("%d\n", &n);
    double p; //宣告小數
    double q; //切記，在迴圈裡再定義q=1-p，否則輸出的q會是1.00000
    int r, player;
    for(int i = 0; i<n; i++)
    {
        scanf("%d %lf %d", &r, &p, &player);
        double sum;
        q = 1 - p; //在這裡再定義
        sum = pow(q, player - 1) * p / ( 1 - pow(q, r) ); //pow(底數, 指數)
        if(p == 0) printf("0.0");
        else printf("%.4lf\n", sum);
    }

    return 0;
}
