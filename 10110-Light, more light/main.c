#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//�D�ت��N����N�O�P�_�Ʀr�O�_����������ơA�]��2�����Ʀ���N�O�_�Ʀr���F�⦸

int main()
{
    long long int a;
    while(scanf("%lld", &a) != EOF)
    {
        if(a == 0) break;
        int b = sqrt(a);
        if(b*b == a)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
