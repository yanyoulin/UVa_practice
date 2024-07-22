#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a == 0 && b == 0) break;
        int sum = 0;
        if((int)sqrt(a) != (int)sqrt(a - 1)) //ex. 4: 4-1=3�Asqrt(4)=2, sqrt(3)=1
        {
            sum += 1; //�{�bsum�O1;
            a = a + 1; //4+1=5
        }
        if((int)sqrt(b) != (int)sqrt(b - 1)) //ex. 10: 10-1=3�Asqrt(10)=3, sqrt(9)=3
        {
            sum += 1;
            b = b - 1;
        }
        int A = sqrt(a);
        int B = sqrt(b);
        sum += (B - A); //sum = 1 + (sqrt(10) - sqrt(5)) = 1 + (3 - 2) = 2
        printf("%d\n", sum);
    }
    return 0;
}

/*
    �o�D�i�H�ΤѪ�Oceil(sqrt(a - 0.1))��a�Ofloor(sqrt(b + 0.1))�����B�z�o�Ӱ��D�A���ι��ڳo��·�
*/
