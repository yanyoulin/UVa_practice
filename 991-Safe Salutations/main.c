#include <stdio.h>
#include <stdlib.h>

//�d������

int main()
{
    int a;
    int count = 0; //�ѨM�̫�@�椣��X�ťզ檺���D
    while(scanf("%d", &a) != EOF)
    {
        if(count != 0) printf("\n");
        count++;
        long long int C = 1, c = 1;
        for(int i = 1; i<=a; i++) //C2a��a
        {
            C = C * (a+i);
            c = c * i;
        }
        long long int b = C/c;
        printf("%lld\n", b/(a+1));
    }
    return 0;
}
