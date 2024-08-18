#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int main()
{
    int coin[11] = {1, 2, 4, 10, 20, 40, 100, 200, 400, 1000, 2000};
    double a;
    while(cin>>a && a!=0.00)
    {
        int b = a*20;
        long long int arr[6002] = {0};
        arr[0] = 1;
        for(int i = 0; i<11; i++) //動態規劃
        {
            for(int j = coin[i]; j<=b; j++)
            {
                arr[j] = arr[j] + arr[j - coin[i]];
            }
        }
        printf("%6.2lf%17lld\n", a, arr[b]); //奢車友規定格式可以這樣打
    }
    return 0;
}
