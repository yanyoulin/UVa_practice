#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int n, N;
    long long int s[10001];
    scanf("%d\n", &n);
    for(int k = 0; k<n; k++)
    {
        scanf(" N = %d", &N); //記好這個打法，當輸入有像這題在輸入變數前要先輸入東西的，直接寫在裡面，但記得補空格
        for(int i = 0; i<N*N; i++)
        {
            scanf("%lld", &s[i]);
        }
        int check = 0;
        for(int i = 0; i<N*N; i++)
        {
            if(s[i] != s[N*N - 1 - i] || s[i] < 0) //原題目有提元素不小於0
            {
                check = 1;
            }
        }
        if(check)
            printf("Test #%d: Non-symmetric.\n", k + 1);
        else
            printf("Test #%d: Symmetric.\n", k + 1);
    }
    return 0;
}
