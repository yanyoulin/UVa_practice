#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long int a, b;
    scanf("%ld %ld", &a, &b);
    while(a || b)
    {
        int carry = 0, count = 0, sum = 0;
        while(a || b)
        {
            sum = a%10 + b%10 + carry;
            if ((sum/10) != 0)
                carry = 1;
            else
                carry = 0;
            count += carry;
            a = a/10;
            b = b/10;
        }
        if(count == 0)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n", count);
        scanf("%ld %ld", &a, &b);
    }
    return 0;
}
