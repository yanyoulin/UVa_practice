#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    long long int n, d; //�Ĥ@�ΤH��, �ĴX��
    while(scanf("%lld %lld", &n, &d) != EOF) //�O�o�[lld��!
    {
        long long int sum = 0;
        while(1)
        {
            sum += n;
            if(sum >= d) break;
            n ++;
        }
        printf("%lld\n", n);
    }
    return 0;
}
